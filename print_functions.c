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

	len += _putchar(c);
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
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	while (*str)
		len += _putchar(*str++);

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
	int count, num;

	num = n;

	count = 0;

	if (n < 0)
	{
		count += _putchar(45);
		n = -n;

	}

	/*test to count digits*/
	while (num != 0)
	{
		num /= 10;
		++count;
	}

	if (n / 10)
	{
		putchar_int(n / 10, len);
	}
	len += _putchar((n % 10) + '0');
	return (count);
}
