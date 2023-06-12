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
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer();
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		free(buffer);
		exit(99);
	}
	while ((num_r = read(fd_from, buffer, 1024)) > 0)
	{
		num_w = write(fd_to, buffer, num_r);
		if (num_w != num_r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			free(buffer);
			exit(98);
		}
	}
	if (num_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
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

char *create_buffer(void)
{
	char *buffer;

	buffer = malloc(1024 * sizeof(char));

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate buffer\n");
		exit(99);
	}
	return (buffer);
}
