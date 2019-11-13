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
 * append_text_to_file - Appends new text to a file
 * @filename: Name of the file (HAS TO EXIST)
 * @text_content: Content of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	int c_count = 0;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);
	if (text_content != NULL)
	{
		c_count = _strlen(text_content);
		if (write(file_d, text_content, c_count) == -1)
			return (-1);
	}
	return (1);
}
