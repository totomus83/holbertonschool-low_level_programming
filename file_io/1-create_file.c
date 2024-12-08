#include "main.h"

/**
 * create_file - create a file with write and read permissons for user
 * @filename : name of the file to be created
 * @text_content: content of the file
 * Return: 1 if succes, -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int desc, i;
	ssize_t bytes;

	i = 0;
	while (text_content != NULL && text_content[i] != '\0')
		i++;
	if (filename == NULL)
		return (-1);
	desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (desc == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes = write(desc, text_content, i);
		if (bytes == -1)
		{
			close(desc);
			return (-1);
		}
	}
	close(desc);
	return (1);
}
