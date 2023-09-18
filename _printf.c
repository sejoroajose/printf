#include "main.h"

/**
 * _printf-customized printf function
 * @format: formatted string
 * Return: returns the formatted string
 */

int _printf(const char *format, ...)
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
		}
		else
		{
			format++;
			if (*format == '%')
			{
				write(1, format, 1);
				chr_to_print++;
			}
			else if (*format == 'c')
			{
				char str = va_arg(list_args, int);

				write(1, &str, 1);
				chr_to_print++;
			}
			else if (*format == 's')
			{
				char *tsr = va_arg(list_args, char*);

				write(1, tsr, 1);
			}
		}
		format++;
	}
	va_end(list_args);
	return (chr_to_print);
}
