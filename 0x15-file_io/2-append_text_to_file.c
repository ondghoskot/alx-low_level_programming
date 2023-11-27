#include "main.h"

/**
 * append_text_to_file - appends text to  a file
 * @filename: file to create
 * @text_content: string to add at the end of the file
 * Return: 1 if success, -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t w = 0, fd;
	size_t length = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
