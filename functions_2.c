#include "main.h"
/**
 * print_r - Prints the reverse of a string
 * @args: string being evaluated
 * Return: lenght of string
 */
int print_r(va_list *args)
{
	int len1, len2;
	char *ptr = va_arg(*args, char *);

	for (len1 = 0; ptr[len1] != '\0'; len1++)
	{}
	for (len2 = (len1 - 1); len2 >= 0; --len2)
		_putchar(ptr[len2]);
	return (len1);
}
/**
 * print_R - Prints the rot13'ed of a string
 * @args: string being evaluated
 * Return: lenght of string
 */
int print_rot(va_list *args)
{
	char *s = va_arg(*args, char *);
	int size;

	for (size = 0; s[size] != '\0'; size++)
	{
		if ((s[size] >= 'a' && s[size] <= 'm')
				|| (s[size] >= 'A' && s[size] <= 'M'))
			_putchar(s[size] + 13);
		else if ((s[size] >= 'n' && s[size] <= 'z')
				|| (s[size] >= 'N' && s[size] <= 'Z'))
			_putchar(s[size] - 13);
	}
	return (size);
}
