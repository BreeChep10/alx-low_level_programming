#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_error(const char *msg);
void check_elf(const unsigned char *e_ident);
void print_magic(const unsigned char *e_ident);
void print_info(const unsigned char *e_ident, int index, const char *label, const char *unknown_label);
void print_type(unsigned int e_type, const unsigned char *e_ident);
void print_entry(unsigned long int e_entry, const unsigned char *e_ident);
void close_elf(int elf);

void print_error(const char *msg) {
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

void check_elf(const unsigned char *e_ident) {
	if (!(e_ident[0] == 0x7f && e_ident[1] == 'E' && e_ident[2] == 'L' && e_ident[3] == 'F')) {
		print_error("Error: Not an ELF file");
	}
}

void print_magic(const unsigned char *e_ident) {
	int index;
	printf("  Magic:   ");
	for (index = 0; index < EI_NIDENT; index++) {
		printf("%02x%s", e_ident[index], index == EI_NIDENT - 1 ? "\n" : " ");
	}
}

void print_info(const unsigned char *e_ident, int index, const char *label, const char *unknown_label) {
	printf("  %-18s", label);
	if (e_ident[index] < EI_NIDENT) {
		switch (index) {
		case EI_CLASS:
			switch (e_ident[index]) {
			case ELFCLASSNONE:
				printf("none\n");
				break;
			case ELFCLASS32:
				printf("ELF32\n");
				break;
			case ELFCLASS64:
				printf("ELF64\n");
				break;
			default:
				printf("<unknown: %x>\n", e_ident[index]);
				break;
			}
			break;
		case EI_DATA:
			switch (e_ident[index]) {
			case ELFDATANONE:
				printf("none\n");
				break;
			case ELFDATA2LSB:
				printf("2's complement, little endian\n");
				break;
			case ELFDATA2MSB:
				printf("2's complement, big endian\n");
				break;
			default:
				printf("<unknown: %x>\n", e_ident[index]);
				break;
			}
			break;
		case EI_VERSION:
			printf("%d%s\n", e_ident[index], e_ident[index] == EV_CURRENT ? " (current)" : "");
			break;
		case EI_OSABI:
			switch (e_ident[index]) {
			case ELFOSABI_NONE:
				printf("UNIX - System V\n");
				break;
			case ELFOSABI_HPUX:
				printf("UNIX - HP-UX\n");
				break;
			case ELFOSABI_NETBSD:
				printf("UNIX - NetBSD\n");
				break;
			case ELFOSABI_LINUX:
				printf("UNIX - Linux\n");
				break;
			case ELFOSABI_SOLARIS:
				printf("UNIX - Solaris\n");
				break;
			case ELFOSABI_IRIX:
				printf("UNIX - IRIX\n");
				break;
			case ELFOSABI_FREEBSD:
				printf("UNIX - FreeBSD\n");
				break;
			case ELFOSABI_TRU64:
				printf("UNIX - TRU64\n");
				break;
			case ELFOSABI_ARM:
				printf("ARM\n");
				break;
			case ELFOSABI_STANDALONE:
				printf("Standalone (embedded) application\n");
				break;
			default:
				printf("<unknown: %x>\n", e_ident[index]);
				break;
			}
			break;
		default:
			printf("%d\n", e_ident[index]);
			break;
		}
	} else {
		printf("%s\n", unknown_label);
	}
}

void print_type(unsigned int e_type, const unsigned char *e_ident) {
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf("  Type:    ");
	switch (e_type) {
        case ET_NONE:
		printf("NONE (None)\n");
		break;
        case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
        case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
        case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
        case ET_CORE:
		printf("CORE (Core file)\n");
		break;
        default:
		printf("<unknown: %x>\n", e_type);
		break;
	}
}

void print_entry(unsigned long int e_entry, const unsigned char *e_ident) {
	printf("  Entry point address:  ");
	if (e_ident[EI_DATA] == ELFDATA2MSB) {
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

void close_elf(int elf) {
	if (close(elf) == -1) {
		fprintf(stderr, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

int main(int argc, char *argv[]) {
	int fd, num_bytes_read;
	Elf64_Ehdr header;
	if (argc < 2) {
		fprintf(stderr, "Usage: %s <elf_file>\n", argv[0]);
		exit(1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1) {
		perror("Error: Can't read file");
		exit(1);
	}
	num_bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));
	if (num_bytes_read == -1) {
		perror("Error: Failed to read file");
		close_elf(fd);
		exit(1);
	}
	check_elf(header.e_ident);
	printf("ELF Header:\n");
	print_magic(header.e_ident);
	print_info(header.e_ident, EI_CLASS, "Class:", "unknown");
	print_info(header.e_ident, EI_DATA, "Data:", "unknown");
	print_info(header.e_ident, EI_VERSION, "Version:", "unknown");
	print_info(header.e_ident, EI_OSABI, "OS/ABI:", "unknown");
	printf("  ABI Version:          %d\n", header.e_ident[EI_ABIVERSION]);
	print_type(header.e_type, header.e_ident);
	print_entry(header.e_entry, header.e_ident);
	close_elf(fd);
	return 0;
}
