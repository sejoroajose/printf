#include "main.h"
#include <stdio.h>
/**
 * print_chr - writes the char to stdout
 * @arguments: input the char
 * @buf: buffer pointer
 * @ibuf: index for the buffer pointer
 * Return: On success .
 */
int print_chr(va_list arguments, char *buf, unsigned int ibuf)
{
	char c;

	c = va_arg(arguments, int);
	handl_buf(buf, c, ibuf);

	return (1);
}
