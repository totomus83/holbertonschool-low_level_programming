#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include "main.h"

/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 * Return: returns 0 if success
 */

int main(int argc, char **argv)
{
	int file_send, file_rec, lread, lprint;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	} file_send = open(argv[1], O_RDONLY);
	if (file_send == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	} file_rec = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_rec == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_send);
		exit(99);
	} while ((lread = read(file_send, buffer, sizeof(buffer))) > 0)
	{ lprint = write(file_rec, buffer, lread);
		if (lprint == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_send);
			close(file_rec);
			exit(99);
		}
	}
	if (lread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_send);
		close(file_rec);
		exit(98);
	}
	if (close(file_send) == -1 || close(file_rec) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_send);
		exit(100);
	} return (0);
}
