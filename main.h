#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _printf(const int *format, ...)
int printf_int(va_list arguments, char *buf, unsigned int ibuf)
int binary(int num);
int octal(int num);

#endif
