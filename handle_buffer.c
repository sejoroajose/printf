#include "main.h"

/**
 * handl_buf - concatenates the arg buffer characters
 * @buf: buffer arg pointer
 * @c: charcter to concatenate
 * @ibuf: index of buffer arg pointer
 * Return: index of buffer pointer.
 */
unsigned int handl_buf(char *buf, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		print_buf(buf, ibuf);
		ibuf = 0;
	}
	buf[ibuf] = c;
	ibuf++;
	return (ibuf);
}
