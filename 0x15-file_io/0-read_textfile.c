#include "holberton.h"

/**
 * read_textfile - prints a text file in the standard ouput.
 * @filename: Points to argument to main in the pos '1' (the string).
 * @letters: Have the number of letters it should read and print.
 * Return: The actual number of letters it ould read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fileOpen, fileRead, filePrint;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters);
	if (!buffer)
		return (0);
	fileOpen = open(filename, O_RDONLY);
	if (fileOpen == STDERR_FILENO)
		return (0);
	fileRead = read(fileOpen, buffer, letters);
	if (fileRead == STDERR_FILENO)
	{
		free(buffer);
		return (0);
	}
	filePrint = write(STDOUT_FILENO, buffer, fileRead);
	if (filePrint == STDERR_FILENO)
	{
		free(buffer);
		return (0);
	}
	close(fileOpen);
	free(buffer);
	return (filePrint);
}
