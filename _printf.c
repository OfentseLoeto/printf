#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _printf - Functions to my printf
 * @format: String with formate to be outputed
 *
 * Return: Number of characters to be printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;

	if (format == NULL)

	return (-1);

	va_start(args, format);

	length = _print_format(format, args);
	va_end(args);

	return (length);
}
