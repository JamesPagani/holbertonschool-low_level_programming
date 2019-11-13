#include "holberton.h"
/**
 * _strlen - Counts the lenght of the string
 * @s: String to analyze
 *
 * Return: Lenght of the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}


/**
 * create_file - Creates a file and fills it or overwrites the data of a file
 * @filename: Name of the file
 * @text_content: Content to add to filename
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int leng = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	leng = _strlen(text_content);
	if (write(fd, text_content, leng) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
