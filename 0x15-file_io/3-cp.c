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
	char *buffer[1024];
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((num_r = read(fd_from, buffer, 1024)) > 0)
	{
		num_w = write(fd_to, buffer, num_r);
		if (num_w != num_r)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (num_r == -1)
		dprintf(STDERR_FILENO, "Error: Can't read to %s\n", argv[1]), exit(98);

	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close to %d\n", fd_to), exit(100);
	return (0);
}
