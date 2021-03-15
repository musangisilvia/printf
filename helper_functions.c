#include "holberton.h"
/**
  *print_positive - check if argument is positive.
  *@args: list of arguments.
  *@len: number of chars printed.
  *
  *Return: len;
  */
int print_positive(va_list args, int len)
{
	int n;

	n = va_arg(args, unsigned int);

	return (print_binary(n, len));
}

/**
  *find_length - count length of chars to be printed
  *@n: unsigned int;
  *@base: base of number
  *
  *Return: length;
  */
unsigned int find_length(unsigned int n, int base)
{
	unsigned int count;

	count = 0;
	while (n > 0)
	{
		n = n / base;
		if (n == 0)
			break;
		count++;
	}
	return (count);
}

/**
  *_putchar - prints a charaxcter
  * @c: character to print.
  *
  * Return: number of bytes printed.
  */
int _putchar(int c)
{
	char a[1];

	a[0] = (char)c;

	return (write(1, a, 1));
}
