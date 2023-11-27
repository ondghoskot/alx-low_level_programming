#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to create
 * @text_content: string to write the file
 * Return: 1 if success, -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t w = 0, fd;
	size_t length = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | 0_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
		{
			length++;
		}
		w = write(fd, text_content, length);
	}
	close(fd);
	if (w == -1)
		return (-1);
	return (1);
}
