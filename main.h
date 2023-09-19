#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _printf_int(va_list list_args, char *bf, unsigned int buf)
int binary(int num);
int octal(int num);

#endif
