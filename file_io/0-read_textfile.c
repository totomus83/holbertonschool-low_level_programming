#include "main.h"

/**
 * read_textfile - read and print a file in the terminal
 * @filename: name of the file we open
 * @letters: read and print
 * Return: bytes of total characters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op;
	char *buffer;
	ssize_t bytes, r_bytes;

	if (filename == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(op);
		return (0);
	}
	bytes = read(op, buffer, letters);
	if (bytes == -1)
	{
		close(op);
		free(buffer);
		return (0);
	}
	r_bytes = write(STDOUT_FILENO, buffer, bytes);
	if (r_bytes == -1 || r_bytes != bytes)
	{
		close(op);
		free(buffer);
		return (0);
	}
	close(op);
	free(buffer);
	return (r_bytes);
}
