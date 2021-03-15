#include "holberton.h"
/**
  * print_binary - converts an unsigned int to binary.
  * @n: unsigned int to be converted.
  * @len: length of characters printd.
  *
  * Return: length.
  */
int print_binary(int n, int len)
{
	/*count chars*/
	len = find_length(n, 2);
	if ((n / 2) != 0)
	{
		print_binary(n / 2, len);
	}

	_putchar((n % 2) + '0');

	return (len);
}
