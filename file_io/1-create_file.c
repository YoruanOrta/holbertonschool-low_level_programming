#include "main.h"

/**
 * create_file - Creates a file and writes content to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 *         If filename is NULL, return -1.
 *         If text_content is NULL, create an empty file.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	bytes_written = write(fd, text_content, strlen(text_content));
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
