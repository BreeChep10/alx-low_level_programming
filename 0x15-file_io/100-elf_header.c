#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

void display_error(const char* message);
void display_error(const char* message);
void display_elf_header(const char* filename);

typedef struct {
	unsigned char magic[4];
	unsigned char class;
	unsigned char data;
	unsigned char version;
	unsigned char osabi;
	unsigned char abiversion;
	unsigned char padding[7];
	Elf64_Half type;
	Elf64_Half machine;
	Elf64_Word version2;
	Elf64_Addr entry;
	Elf64_Off phoff;
	Elf64_Off shoff;
	Elf64_Word flags;
	Elf64_Half ehsize;
	Elf64_Half phentsize;
	Elf64_Half phnum;
	Elf64_Half shentsize;
	Elf64_Half shnum;
	Elf64_Half shstrndx;
} ElfHeader;

void display_error(const char* message)
{
	printf("%s\n", message);
	exit(98);
}

void display_elf_header(const char* filename)
{
	ElfHeader elf_header;
	ssize_t num_read;
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		display_error("Error opening file");
	}
	/* Read the ELF header */
	num_read = read(fd, &elf_header, sizeof(elf_header));
	if (num_read == -1)
	{
		display_error("Error reading file");
	}
	if (num_read < (ssize_t)sizeof(elf_header))
	{
		display_error("Invalid ELF file");
	}

	/* Check if it's an ELF file */
	if (elf_header.magic[0] != ELFMAG0 ||
			elf_header.magic[1] != ELFMAG1 ||
			elf_header.magic[2] != ELFMAG2 ||
			elf_header.magic[3] != ELFMAG3)
	{
		display_error("Not an ELF file");
	}
	printf("Magic: %02x %02x %02x %02x\n",
	elf_header.magic[0], elf_header.magic[1], elf_header.magic[2], elf_header.magic[3]);

	printf("Class: ");
	if (elf_header.class == ELFCLASS32)
	{
		printf("ELF32\n");
	}
	else if (elf_header.class == ELFCLASS64)
	{
		printf("ELF64\n");
	}
	else
	{
		printf("Invalid\n");
	}
	printf("Data: ");
	if (elf_header.data == ELFDATA2LSB)
	{
		printf("2's complement, little-endian\n");
	}
	else if (elf_header.data == ELFDATA2MSB)
	{
		printf("2's complement, big-endian\n");
	}
	else
	{
		printf("Invalid\n");
	}
	printf("Version: %d\n", elf_header.version);
	printf("OS/ABI: %u\n", elf_header.osabi);
	printf("ABI Version: %u\n", elf_header.abiversion);
	printf("Type: %u\n", elf_header.type);
	printf("Entry point address: 0x%lx\n", (unsigned long)elf_header.entry);

	close(fd);
}

int main(int argc, char* argv[])
{
	const char* filename;

	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filename");
	}

	filename = argv[1];
	display_elf_header(filename);

	return 0;
}

