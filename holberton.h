#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(int c);
int _printf(const char *format, ...);

int get_print_func(char, char, va_list, int); 
int print_char(va_list, int);
int print_str(va_list, int);
int print_num(va_list, int);
int putchar_int(int, int);
int print_positive(va_list, int);
int print_binary(int, int);
#endif
