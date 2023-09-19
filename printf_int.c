#include "main.h"

/**
 * _printf - function to print an integer
 * @format: formatted string
 * Return: number of chars printed.
 */

int _printf(const int *format, ...)
{
	int chr_to_print = 0;
	va_list list_args;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(list_args, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			chr_to_print++;
		}
		else
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			if (*format == '%')
			{
				write(1, format, 1);
				chr_to_print++;
			}
			else if (*format == 'd')
			{
				int str = va_arg(list_args, int);

				write(1, &str, 1);
				chr_to_print++;
			}
			else if (*format == 'i')
			{
				int *tsr = va_arg(list_args, int*);

				write(1, &tsr, 1);
				chr_to_print++;
			}
		}
		format++;
	}
	va_end(list_args);
	return (chr_to_print);
}
