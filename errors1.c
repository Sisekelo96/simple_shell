#include "shell.h"

/**
 * erratoi - converts a string to an integer
 * @s: the string to be converted
 * Return: 0 if no numbers in the string, converted number otherwise
 * -1 on error
 */
int _erratoi(const char *s)
{
	int i = 0;
	long long result = 0;
	int sign = 1;
	if (!s)

		return (-1);

	while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			if (result * sign > INT_MAX || result * sign < INT_MIN)
				return (-1_;
		}
		else
		{
			return (-1);
		}
	}
	return (result * sign);
}

/**
 * print_error - prints an error message
 * @info: the parameter and return info struct
 * @estr: string cotaining the specified error type
 * Return: void
 */
void print_error(info_t *info, const char *estr)
{
	_eputs(info-> fname);
	_eputs(":");
	print_d(info->line_count, STDERR_FILENO);
	_eputs(":");
	_eputs(info->argv[0];
	_eputs(":");
	_eputs(estr);
}

/**
 * print_d - function prints a decimal (integer) number (base 10)
 * @input: the input
 * @fd: the fille descriptor to write to
 * Return: number of characters printed
 */

int print_d(int input, int fd)
{
	int count = 0;
	long num = (long)input;
	if (fd == STDERR_FILENO)
	_eputchar(fd, ' ');
	if (num < 0)
	{
		num = -num;
		_putchar(fd, '-');
		count++;
	}
	if (num < 10)
	{
		_putchar(fd, num + '0');
		return (count + 1);
	}

	count += print_d(num / 10, fd);
	_putchar(fd, num % 10 + '0');
	return (count + 1);
}

/**
 *
