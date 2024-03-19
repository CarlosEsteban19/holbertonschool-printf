#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
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
	_putchar(va_arg(*args, int));
	return (1);
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

	x = _strlen(ptr);
	return (write(1, ptr, x));
}
