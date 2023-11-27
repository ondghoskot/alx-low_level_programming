#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: numbers of letters to read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r_count;
	ssize_t w_count;
	ssize_t fd;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	/* open file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* allocate memory */
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	/* start read count */
	r_count = read(fd, buffer, letters);
	close(fd);
	if (r_count <= 0)
	{
		free(buffer);
		return (0);
	}

	/* start write count */
	w_count = write(STDOUT_FILENO, buffer, read_count);
	free(buffer);
	if (w_count < 0)
		return (0);
	return (w_count);
}
