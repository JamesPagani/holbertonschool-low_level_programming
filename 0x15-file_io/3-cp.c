#include "holberton.h"
#include <stdio.h>
/**
 * error - Closes the app with a certain error code
 * @code: Error's code
 * @fd: File Descriptor. Used for error 100
 * @f: File. Used for error 98 and 99
 * Return: Nothing
 */
void error(int code, int fd, char *f)
{
	if (code == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (code == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f);
		exit(98);
	}
	if (code == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	}
	if (code == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point. Writes the contents of a file to another
 * @argc: Amount of arguments recieved
 * @argv: Arguments recieved
 * Return: 0 on success, anything else on failure
 */

int main(int argc, char *argv[])
{
	int in_d, out_d, rd, wr;
	char *buff, *in = argv[1], *out = argv[2];

	if (argc != 3)
		error(97, 0, NULL);
	in_d = open(argv[1], O_RDONLY);
	out_d = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	buff = malloc(1024);
	if (in_d == -1)
		error(98, 0, in);
	if (out_d == -1 || buff == NULL)
		error(99, 0, out);
	rd = read(in_d, buff, 1024);
	while (rd > 0)
	{
		wr = write(out_d, buff, rd);
		if (wr == -1)
		{
			free(buff);
			error(99, 0, out);
		}
		rd = read(in_d, buff, 1024);
	}
	free(buff);
	if (close(in_d) == -1)
		error(100, in_d, NULL);
	if (close(out_d) == -1)
		error(100, out_d, NULL);
	return (0);
}
