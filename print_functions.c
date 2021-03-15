#include "holberton.h"

/**
  * _putchar - Prints a character
  * @c: Character to print
  *
  * Return: Number of printed bytes
  */
int _putchar(int c)
{
	char a[1];
	a[0] = (char)c;

	return (write(1, a, 1));
}



/**
  * print_num - Prints number to std output
  * @args: List of arguments
  *
  * Return: 0;
  */

int print_num(va_list args, int len)
{
	int n  = va_arg(args, int);

	len = putchar_int(n, len);
	return (len);
}


/**
  * print_char - Prints a char to std output
  * @args: List of arguments
  *
  * Return: Not sure yet
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
  *
  * Return: Not sure yet
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
  *
  */
int putchar_int(int n, int len)
{
	if (n < 0)
	{
		len += _putchar('-');
		n = -n;
	}

	if (n / 10)
		putchar_int(n / 10, len);

	len += _putchar((n % 10) + '0');
	return (len);
}
