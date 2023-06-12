#include "main.h"

/**
 * main - Entry point.
 * @argc: arguement count.
 * @argv: Pointer to the arguements entered.
 *
 * Return: 0 upon success.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, num_r, num_w;
	char *buffer;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	num_r = read(fd_from, buffer, 1024);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, permissions);

	while (num_r > 0)
	{
		if (fd_from == -1 || num_r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		num_w = write(fd_to, buffer, num_r);
		if (fd_to == -1 || num_w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		num_r = read(fd_from, buffer, 1024);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);
	}

	free(buffer);
	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
/**
 * close_file - Function that closes a file.
 * @fd: The file descriptor to close.
 *
 * Return: VOID.
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * create_buffer - Function that creates a buffer.
 * @newfile: Pointer to the new file whose space has the stored char.
 *
 * Return: Pointer to the new buffer whose memory has been allocated.
 */

char *create_buffer(char *newfile)
{
	char *buffer;

	buffer = malloc(1024 * sizeof(char));

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", newfile);
		exit(99);
	}
	return (buffer);
}
