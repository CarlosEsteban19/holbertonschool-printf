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
 * @args: char argument
 * Return: int chars printed (Success)
 */
int print_c(va_list *args)
{
	return (_putchar(va_arg(*args, int)));
}
/**
 * print_s - prints a string
 * @args: string argument
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
/**
 * print_num - prints a number
 * @args: int argument
 * Return: lenght of number
 */
int print_num(va_list *args)
{
	int zeros = 1, len = 0;
	int n, num, div;
		
	n = va_arg(*args, int);

	if (n < 0)
	{
		len += _putchar('-');
		num = -n;
	}
	else
		num = n;

	div = num;
	while (div > 9)
	{
		div /= 10;
		zeros *= 10;
	}
	while (zeros >= 1)
	{
		len += _putchar(((num / zeros) % 10) + '0');
		zeros = zeros / 10;
	}
	return (len);
}
