#include "main.h"
#include <stdio.h>

/**
 * _close - function to close a file
 * @fd: closed file
 * Return: nothing
 */
void _close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * cp - function that copies a file
 * @src_fd: file to copy
 * @subject_fd: file to copy into
 * @subf: name of the subject file
 * Return: nothing
 */
void cp(ssize_t src_fd, ssize_t subject_fd, char *subf)
{
	char *buffer[1024];
	ssize_t count;

	count = read(src_fd, buffer, 1024);
	while (count != 0)
	{
		if (count == -1)
		{
			_close(src_fd);
			_close(subject_fd);
			exit(98);
		}
		count = write(subject_fd, buffer, count);
		if (count == -1)
		{
			_close(src_fd);
			_close(subject_fd);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", subject_fd);
		}
		count = read(src_fd, buffer, 1024);
	}
}

/**
 * main - copies the content of a file to another
 * @argc: number of CLAs (Command Line Arguments)
 * @argv: CLAs
 * Return: 0 if success, 97 for incorrect args, 98 for src error
 * 99 for subject error, 100 for close error
 */
int main(int argc, char *argv[])
{
	ssize_t src_fd, subject_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	src_fd = open(argv[1], 0_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	subject_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (subject_fd == -1)
	{
		_close(src_fd);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	copy_file(src_fd, subject_fd, argv[2]);
	_close(src_fd);
	_close(subject_fd);
	return (0);
}
