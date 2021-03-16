#include "holberton.h"

/**
  * print_num - Prints number to std output
  * @args: List of arguments
  * @len: Length of string so far
  *
  * Return: The new length of the string
  */

int print_num(va_list args, int len)
{
	int n;

	n = va_arg(args, int);

	len = putchar_int(n, len);
	return (len);
}


/**
  * print_char - Prints a char to std output
  * @args: List of arguments
  * @len: Length of string so far
  *
  * Return: len
  */
int print_char(va_list args, int len)
{
	int c = va_arg(args, int);

	len += prntchar(c);
	return (len);
}


/**
  * print_str - Prints a string to std output
  * @args: List of arguments
  * @len: Length of string so far
  *
  * Return: The new length of the string
  */
int print_str(va_list args, int len)
{
	const char *str = va_arg(args, const char *);

	if (str == NULL)
		str = "(null)";
	while (*str)
		len += prntchar(*str++);

	return (len);
}


/**
  * putchar_int - prints integers
  * @n: Number
  * @len: Length of string so far
  *
  * Return: The new length of the string
  */
int putchar_int(int n, int len)
{
	unsigned long num;

	if (n < 0)
	{
		len += prntchar(45);
		num = -(unsigned int)n;
	}
	else
	{
		num = n;
	}
	len += print_numbers(num, 10, "0123456789");

	return (len);
}
