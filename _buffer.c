#include "main.h"

/**
 * print_buf - prints out the buffer
 *
 * @buf: buffer arg pointer
 * @nbuf: number of bytes to print out
 * Return: number of bytes printed.
 */
int print_buf(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
