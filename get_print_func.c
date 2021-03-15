#include "holberton.h"

/**
  * get_print_func - Get the correct print function and return a pointer to it
  * @c: The specifier or current character
  * @b: The previous character
  * @args: List of arguments
  * @len: number of chars printed.
  *
  * Return: Pointer to correct print function
  */

int get_print_func(char c, char b, va_list args, int len)
{
	switch (c)
	{
		case 'c':
			len = print_char(args, len);
			break;
		case 's':
			len = print_str(args, len);
			break;
		case '%':
			len += _putchar(c);
			break;
		case 'd':
			len = print_num(args, len);
			break;
		case 'i':
			len = print_num(args, len);
			break;
		case 'b':
			len = print_positive(args, len);
			break;
		default:
			len += _putchar(b);
			len += _putchar(c);
			break;
	}
	return (len);
}
