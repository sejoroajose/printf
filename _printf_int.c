#include "main.h"

/**
 * _printf_int - function to print an integer
 * @list_args: input string
 * @bf: buffer pointer
 * @buf: index for buffer pointer
 * Return: number of chars printed.
 */

int _printf_int(va_list list_args, char *bf, unsigned int buf)
{
	int inpt;
	unsigned int int_in, int_tmp, i, dv, isng;

	inpt = va_arg(list_args, int);
	isng = 0;
	if (inpt < 0)
	{
		int_in = inpt * -1;
		buf = handl_buf(bf, '-', buf);
		isng = 1;
	}
	else
	{
		int_in = inpt;
	}

	temp_int = int_in;
	tmp = 1;

	while (temp_int > 9)
	{
		tmp *= 10;
		temp_int /= 10;
	}
	for (i = 0; tmp > 0; tmp /= 10, i++)
	{
		buf = handl_buf(bf, ((int_in / tmp) % 10) + '0', buf);
	}
	return (i + isng);
}
