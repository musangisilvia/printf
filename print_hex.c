#include "holberton.h"

/**
  * print_hex - Prints hex notation of a number
  * @args: List of arguments
  * @len: Current length of string
  *
  * Return: The length
  */

int print_hex(va_list args, int len)
{
	unsigned int n = va_arg(args, unsigned int);

	len += print_numbers(n, 16, "0123456789abcdef");

	return (len);
}
