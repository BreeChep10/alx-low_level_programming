#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The text to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, content_len = 0;
	ssize_t num_w;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i]; i++)
		content_len++;

	num_w = write(fd, text_content, content_len);
	close(fd);

	if (num_w == -1)
		return (-1);
	return (1);
}

