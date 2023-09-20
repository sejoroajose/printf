#include "main.h"

/**
 * hex_array - writes out the char to stdout
 *
 * @binary: where array is stored the binary.
 * @hex: where array is stored at the hexadecimal.
 * @isupp: is the integer that determines the hexadecimal array is
 * in uppercase or lowercase letter.
 * @limit:  hex size
 * Return: binary array.
 */
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit)
{
	int op, i, j, toletter;

	hex[limit] = '\0';
	if (isupp)
		toletter = 55;
	else
		toletter = 87;
	for (i = (limit * 4) - 1; i >= 0; i--)
	{
		for (op = 0, j = 1; j <= 8; j *= 2, i--)
			op = ((bnr[i] - '0') * j) + op;
		i++;
		if (op < 10)
			hex[i / 4] = op + 48;
		else
			hex[i / 4] = op + toletter;
	}
	return (hex);
}
