#include "holberton.h"

/**
 * main - Copies the content of a file to other file.
 * @argc: Define the number arguments.
 * @argv: string of arguments to operate.
 * Return: 1 on success, -1 if it not.
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int fileOpen1, fileOpen2, fileWrite, fileRead, closeFile1, closeFile2, i;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fileOpen1 = open(argv[1], O_RDONLY);
	if (fileOpen1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fileOpen2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fileOpen2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	for (i = 0; i <= 1024; i++)
	{
		fileRead = read(fileOpen1, buffer, 1024);
		if (fileRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		fileWrite = write(fileOpen2, buffer, fileRead);
		if (fileWrite == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	closeFile1 = close(fileOpen1);
	if (closeFile1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileOpen1), exit(100);
	closeFile2 = close(fileOpen2);
	if (closeFile2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileOpen2), exit(100);
	return (0);
}
