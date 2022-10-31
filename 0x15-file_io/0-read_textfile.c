#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout
 * @filename: The name of the file
 * @letters: The number of letters it should read and print
 * Return: 0 or letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr;
	char *buf;
	int fd;

	fd = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);
	if (rd == -1 || wr == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	return (rd);
}
