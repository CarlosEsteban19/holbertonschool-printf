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
int print_rot(va_list *args);
int print_r(va_list *args);
int print_u(va_list *args);

/**
 * struct letras - structure of print function types
 * @letra: char that identifies the type of print to be used
 * @f: print function to be used
 */
typedef struct letras
{
char *letra;
int (*f)();
} typeofprint;

#endif /* MAIN_H */
