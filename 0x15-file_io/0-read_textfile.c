#include "main.h"

/**
 * read_textfile - Function that reads a textfile and prints it.
 * to the POSIX standard output.
 * @filename: Pointer to th file to be read.
 * @letters: The number of letters it should read and print.
 *
 * Return: The number of letters it could read and print else 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_w, num_r;
	char *buffer;
	int fd;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc((letters + 1) * sizeof(char));
	if (!buffer)
	{
		close(fd);
		return (0);
	}
	num_r = read(fd, buffer, letters);
	if (num_r == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	num_w = write(STDOUT_FILENO, buffer, num_r);
	if (num_w == -1 || num_w != num_r)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (num_w);
}
