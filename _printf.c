#include "holberton.h"

/**
  * _printf - Printss to standard output the arguments passed to it
  * @format: The format to be taken into account while printing
  *
  * Return: Number of characters printed
  */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, len = 0;

	va_start(args, format);

	if (!format)
		return (-1);

	while (format && format[i])
	{
		if (format[i] != '%')
		{
			len += prntchar(format[i]);
			i++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			/*Function to check specifier and run correct print*/
			len = get_print_func(format[i], format[i - 1], args, len);
			i++;
		}
	}

	va_end(args);

	return (len); /*Supposed to be the length*/
}
