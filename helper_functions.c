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
	unsigned long int n;

	n = va_arg(args, int);

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
  * prntchar - prints a charaxcter
  * @c: character to print.
  *
  * Return: number of bytes printed.
  */
int prntchar(int c)
{
	char a[1];

	a[0] = (char)c;

	return (write(1, a, 1));
}

/**
  * print_numbers - Prints numbers according to the specified base
  * @n: Number to print
  * @base: The base to print.
  * @digits: The digits found in this base
  *
  * Return: The length
  */

int print_numbers(unsigned long n, unsigned int base, const char *digits)
{

	if (n >= base)
		print_numbers((n / base), base, digits);
	prntchar(digits[n % base]);
	return (find_length(n, base) + 1);
}
