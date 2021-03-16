#include "holberton.h"
/**
  * print_binary - converts an unsigned int to binary.
  * @n: unsigned int to be converted.
  * @len: length of characters printd.
  *
  * Return: length.
  */
int print_binary(unsigned int n, int len)
{
	/*count chars*/
	if ((n / 2) != 0)
	{
		print_binary(n / 2, len);
	}

	prntchar((n % 2) + '0');
	len += find_length(n, 2);
	return (len + 1);
}
