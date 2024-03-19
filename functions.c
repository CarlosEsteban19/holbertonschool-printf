#include "main.h"
/**
 * _strlen - Calculates the length of the string
 * @s: The stirng being measured
 * Return: int (Success)
 */
int _strlen(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{}
	return (l);
}
/**
 * print_c - prints a single character
 * @args: char to be printed
 * Return: int chars printed (Success)
 */
int print_c(va_list *args)
{
	return (_putchar(va_arg(*args, int)));
}
/**
 * print_s - prints a string
 * @args: string to be printed
 * Return: int chars printed (Success)
 */
int print_s(va_list *args)
{
	size_t x;
	char *ptr = va_arg(*args, char *);

	if (ptr == NULL)
		return (write(1, "(null)", 6));
	x = _strlen(ptr);
	return (write(1, ptr, x));
}
int print_num(va_list *args)
{
	int divide = 1;
	int zeros = 1;
	int num;
	int n = va_arg(*args, int);

	if (n == 0)
	{
		return _putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / divide > 9)
	{
		divide *= 10;
	}
	while (divide >= 1)
	{
		num = (n / divide) % 10;

		if (num != 0 || !zeros)
		{
			_putchar(num + '0');
			zeros = 0;
		}
		divide /= 10;
	}
	return (n);
}
