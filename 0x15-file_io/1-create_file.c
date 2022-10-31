#include "main.h"

/**
 * create_file - Creates a file
 * @filename: The name of the file
 * @text_content: A NULL terminated string to wite
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, rw;
	int letters = 0;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filename == NULL)
		return (-1);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[letters])
		letters++;
	rw = write(fd, text_content, letters);

	if (rw == -1)
		return (-1);
	close(fd);
	return (1);
}
