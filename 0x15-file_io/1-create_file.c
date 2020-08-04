#include "holberton.h"

/**
 * create_file - creates a file.
 * @filename: Points to the '1' argument to main (name of the file).
 * @text_content: Points to the '2' argument to main (the content of the file).
 * Return: 1 on success, -1 if it not.
 */
int create_file(const char *filename, char *text_content)
{
	int fileOpen, fileWrite, fileLen;

	if (!filename)
		return (-1);
	fileOpen = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fileOpen == -1)
		return (-1);
	if (text_content == 0)
		return (1);
	fileLen = _strlen(text_content);
	fileWrite = write(fileOpen, text_content, fileLen);
	if (fileWrite == -1)
		return (-1);
	close(fileOpen);
	return (1);
}

/**
 * _strlen - The function returns the length of a string.
 * @s: Variable of the string.
 * Return: integer value.
 */
int _strlen(char *s)
{
	int length, i = 0;

	for (length = 0; s[length] != '\0'; length++)
		i++;
	return (i);
}
