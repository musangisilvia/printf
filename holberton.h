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
unsigned int find_length(unsigned int n, int base);
int print_unsigned(va_list args, int len); 
int print_numbers(unsigned long n, unsigned int base, const char *digits);
int print_octal(va_list args, int len);
int print_hex(va_list args, int len);


#endif /* HOLBERTON_H */
