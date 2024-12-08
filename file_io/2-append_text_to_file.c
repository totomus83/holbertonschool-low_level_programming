#include "main.h"

/**
 * append_text_to_file - adds text at the end of an existing file
 * @filename: name of the file to append text to
 * @text_content: string to append to filename
 * Return: 1 if succes, -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int desc, i;
	ssize_t bytes;

	i = 0;
	while (text_content != NULL && text_content[i] != '\0')
		i++;
	if (filename == NULL)
		return (-1);

	desc = open(filename, O_WRONLY | O_APPEND, 0600);
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
