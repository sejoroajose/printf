#include "main.h"

/**
 * print_buf - prints the buffer
 * @buf: pointer buffer
 * @nbuf: number of bytes expected to print
 * Return: number of bytes printed.
 */

int print_buf(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
