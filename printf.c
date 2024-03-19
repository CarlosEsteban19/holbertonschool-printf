#include "main.h"
/**
 * _printf - prints output
 * @format: character string
 * Return: always 0
 */
int _printf(const char *format, ...)
{
	typeofprint array[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL},
	};
	int i, j, ttl = 0, cnt = 0;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			cnt++;
			for (j = 0; array[j].letra != NULL; j++)
			{
				if (format[i + 1] == *array[j].letra)
				{
					ttl += array[j].f(args);
					i++, cnt++;
					break;
				}
				else if (format[i + 1] == '%')
				{
					_putchar('%'), i++;
					break;
				}
			}
			if (array[j].letra == NULL && format[i + 1] != '\0')
				_putchar(format[i]), cnt--;
			else if (array[j].letra == NULL && format[i + 1] == '\0')
				return (-1);
		}
		else
		_putchar(format[i]);
	}
	va_end(args);
	return (ttl + (i - cnt));
}
