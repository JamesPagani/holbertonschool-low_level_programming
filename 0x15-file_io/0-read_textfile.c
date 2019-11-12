#include "holberton.h"
/**
 * read_textfile - Reads and prints the contents of a text file
 * @filename: Name of the file to read
 * @letters: Expected amount of characters to read
 * Return: Amount of characters read and printed.
 * Guaranteed to be 0 if filename is empty or there was an error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int file_d;
	int c_count = 0, c_out = 0;

	if (filename == NULL)
		return (0);

	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
	{
		return (0);
	}
	file_d = open(filename, O_RDWR);
	if (file_d == -1)
	{
		close(file_d);
		free(buf);
		return (0);
	}
	c_count = read(file_d, buf, letters);
	if (c_count == -1)
	{
		close(file_d);
		free(buf);
		return (0);
	}
	c_out = write(STDOUT_FILENO, buf, c_count);
	if (c_out == -1 || c_out != c_count)
	{
		close(file_d);
		free(buf);
		return (0);
	}
	close(file_d);
	free(buf);
	return (c_count);
}
