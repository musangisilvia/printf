#include "holberton.h"

/**
  * print_u - Prints an unsigned integer
  * @args: List of arguments
  * @len: Current length of string
  *
  * Return: The length
  */

int print_u(va_list args, int len)
{
	unsigned int n = va_arg(args, unsigned int);

	len += print_numbers(n, 10, "0123456789");

	return (len);
}
