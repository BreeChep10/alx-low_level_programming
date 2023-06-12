#include "main.h"

/**
 * create_file - Function that creates a file.
 * @filename: Pointer to the file to be created.
 * @text_content: The content to be input in the new file.
 *
 * Return: 1 upon success else 0.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, content_len = 0;
	mode_t permissions = S_IRUSR | S_IWUSR;
	ssize_t num_w;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			content_len++;
		num_w = write(fd, text_content, content_len);
		if (num_w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
