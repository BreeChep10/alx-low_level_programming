#include "main.h"
#include <string.h>

void print_error(const char* message);
void print_elf_header_info(Elf64_Ehdr* elf_header);

/**
 */

void print_error(const char* message)
{
	printf("%s\n", message);
	exit(98);
}
void print_elf_header_info(Elf64_Ehdr* elf_header)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%d@x ", elf_header->e_ident[i]);
	}
	printf("\n");
}
int main(int argc, char *argv[])
{
	Elf64_Ehdr elf_header;
	const char *filename;
	int fd;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}
	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		print_error("Error opening the file.");
	}
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		print_error("Error reading the ELF header.");
	}
	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		print_error("Not a valid ELF file.");
	}
	print_elf_header_info(&elf_header);

	close(fd);
	return (0);
}
