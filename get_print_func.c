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
		case 'S':
			len = print_Str(args, len);
			break;
		case '%':
			len += prntchar(c);
			break;
		case 'd':
		case 'i':
			len = print_num(args, len);
			break;
		case 'b':
			len = print_positive(args, len);
			break;
		case 'u':
			len = print_unsignd(args, len);
			break;
		case 'o':
			len = print_octal(args, len);
			break;
		case 'x':
			len = print_hex(args, len);
			break;
		case 'X':
			len = print_heX(args, len);
			break;
		case 'R':
			len = print_rot13(args, len);
			break;
		default:
			len += prntchar(b);
			len += prntchar(c);
			break;
	}
	return (len);
}
