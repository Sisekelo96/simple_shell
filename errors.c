#include "shell.h"

/**
 * _eputs - prints an input string to the standard error stream
 * @str: the string to be printed
 *
 * Return: Nothing
 */
void _eputs(const char *str)
{
	if (str)
		write(STDERR_FILENO, str, _strlen(str));
}

/**
 * _eputchar - writes the character c to the standard error stream
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _eputchar(char c)
{
	return write(STDERR_FILENO, &c, 1);
}

/**
 * _putfd - writes the character c to the given file descriptor
 * @c: The character to print
 * @fd: The file descriptor to write to
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putfd(char c, int fd)
{
	return write(fd, &c, 1);
}

/**
 * _putsfd - prints an input string to the specified file descriptor
 * @str: the string to be printed
 * @fd: the file descriptor to write to
 *
 * Return: the number of characters put
 */
int _putsfd(const char *str, int fd)
{
	int count = 0;

	if (str)
	{
		count = _strlen(str);
		if (count > 0)
			write(fd, str, count);
	}

	return count;
}
