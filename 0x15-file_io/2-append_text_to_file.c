#include "holberton.h"

/**
 * append_text_to_file - Appends text at th end of a file.
 * @filename: Pointer to the '1' argument to main (the name of the file).
 * @text_content: POinter to the '2' argument to main (Content of the file).
 * Return: 1 on success and -1 if it not.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileOpen, fileWrite, fileLen;

	if (!filename)
		return (-1);
	fileOpen = open(filename, O_WRONLY | O_APPEND);
	if (fileOpen == -1)
		return (-1);
	if (text_content == NULL)
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
