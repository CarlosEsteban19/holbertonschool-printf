#include "main.h"
/**
 * print_r - Prints thr reverse of the strin it was given
 * @args: This is the string being evaluated
 * Return: Void
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
