#include "main.h"

/**
 * append_text_to_file - Appends a text at the end of a file
 * @filename: The name of the file
 * @text_content: The NULL terminated string to add at the end of the file
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, rw;
	int letters = 0;

	fd = open(filename, O_WRONLY | O_APPEND);

	if (filename == NULL)
		return (-1);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[letters])
			letters++;
		rw = write(fd, text_content, letters);

		if (rw == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
