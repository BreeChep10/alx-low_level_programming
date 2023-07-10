#include "main.h"

/**
 * checkElf - Function that checks an elf file.
 * @ident: Pointer to the file.
 *
 * Return: Void.
 */

void checkElf(unsigned char *ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (ident[index] != 127 &&
		    ident[index] != 'E' &&
		    ident[index] != 'L' &&
		    ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * printMagic - Function that prints information on magic.
 * @ident: Poiner to the file.
 *
 * Return: Void.
 */

void printMagic(unsigned char *ident)
{
	int index;

	printf("  Magic:   ");
	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", ident[index]);
		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * printClass - Function that prints info on class.
 * @ident: A pointer to an array containing the ELF class.
 *
 * Return: Void.
 */

void printClass(unsigned char *ident)
{
	printf("  Class:                             ");

	switch (ident[EI_CLASS])
	{
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
		printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
 * printData - Function that prints the data of an ELF header.
 * @ident: A pointer to an array containing ELF class.
 *
 * Return: Void.
 */

void printData(unsigned char *ident)
{
	printf("  Data:                              ");

	switch (ident[EI_DATA])
	{
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
		printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
 * printVersion - Function that prints the version of an ELF header.
 * @ident: A pointer to an array containing the ELF version
 *
 * Return: Void.
 */

void printVersion(unsigned char *ident)
{
	printf("  Version:                           %d",
	       ident[EI_VERSION]);
	switch (ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * printOSABI - Function that prints the OSABI of the ELF header.
 * file.
 * @ident: Poiinter to an array containing the elf file.
 *
 * Return: Void.
 */

void printOSABI(unsigned char *ident)
{
	printf("  OS/ABI:                            ");

	switch (ident[EI_OSABI])
	{
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
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", ident[EI_OSABI]);
	}
}

/**
 * printABI - Function that prints the ABI of an elf header file.
 * @ident: Pointer to an array of an elf header file.
 *
 * Return: Void.
 */

void printABI(unsigned char *ident)
{
	printf("  ABI Version:                       %d\n",
			ident[EI_ABIVERSION]);
}

/**
 * printType - Function that prints the Type of an eld header file.
 * @type: file descriptor tupe.
 * @ident: Pointer to an array of the elf version.
 *
 * Return: Void.
 */

void printType(unsigned int type, unsigned char *ident)
{
	if (ident[EI_DATA] == ELFDATA2MSB)
		type >>= 8;
	printf("  Type:                              ");
	switch (type)
	{
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
		printf("<unknown: %x>\n", type);
	}
}

/**
 * printEntry - Function that prints Entry of an elf header file.
 * @entry: Number of entries made.
 * @ident: Pointer to an array of the elf version.
 *
 * Return: Void.
 */

void printEntry(unsigned long int entry, unsigned char *ident)
{
	printf("  Entry point address:               ");

	if (ident[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
			((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}
	if (ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);
	else
		printf("%#lx\n", entry);
}

/**
 * closeElf - Function that closes an elf file.
 * @fileDescriptor: File descriptions of type int.
 *
 * Return: void.
 */

void closeElf(int fileDescriptor)
{
	if (close(fileDescriptor) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close file descriptor %d\n", fileDescriptor);
		exit(98);
	}
}

/**
 * main - Entry point of the program.
 * Description: If the file is not an ELF file return error.
 * .
 * @argc: Arguement count.
 * @argv: Pointer to an array of arguements entered at runtime.
 *
 * Return: 0 on success.
 */

int main(int argc __attribute__ ((unused)), char *argv[])
{
	Elf64_Ehdr *header;
	int file, readResult;

	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		closeElf(file);
		dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
		exit(98);
	}
	readResult = read(file, header, sizeof(Elf64_Ehdr));
	if (readResult == -1)
	{
		free(header);
		closeElf(file);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	checkElf(header->e_ident);
	printf("ELF Header:\n");
	printMagic(header->e_ident);
	printClass(header->e_ident);
	printData(header->e_ident);
	printVersion(header->e_ident);
	printOSABI(header->e_ident);
	printABI(header->e_ident);
	printType(header->e_type, header->e_ident);
	printEntry(header->e_entry, header->e_ident);
	free(header);
	closeElf(file);
	return (0);
}
