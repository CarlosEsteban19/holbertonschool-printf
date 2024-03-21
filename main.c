#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;

	ui = (unsigned int)INT_MAX + 1024;
	len = _printf("Let's try to printf a simple sentence %r\n", "hello");
	len2 = printf("Let's try to printf a simple sentence %r\n", "hello");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	len = printf("hello %s\n", "world");
	len2 = _printf("hello %r\n", "dlrow");
	printf("[%d, %d]\n", len, len2);
	return (0);
}
