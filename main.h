#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int print_c(va_list *args);
int print_s(va_list *args);
int print_num(va_list *args);

typedef struct letras
{
char *letra;
int (*f)();
} typeofprint;

#endif /* MAIN_H */
