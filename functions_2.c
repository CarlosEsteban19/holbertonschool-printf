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
 * print_rot - Prints the rot13'ed of a string
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
		else
			_putchar(s[size]);
	}
	return (size);
}
/**
 * print_u - prints a number without it's sign
 * @args: unsigned int argument
 * Return: lenght of number
 */
int print_u(va_list *args)
{
        int n;
        unsigned int num, div, zeros = 1, len = 0;

        n = va_arg(*args, int);

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
/**
 * print_b - prints given number in binary
 * @args: number to convert
 * Return: int length
 */
int print_b(va_list *args)
{
        int r, len, idx, n;
        int array[32];

        n = va_arg(*args, int);
								
								if (n < 0)
									n = -n;

        for(idx = 0; n > 0; idx++)
        {
                r = n % 2;
                n /= 2;
                array[idx] = r;
        }
        len = idx;
        for(--idx; idx >= 0; idx--)
                 _putchar(array[idx] + '0');
        return (len);
}
