
#ifndef MAIN_H
#define "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct specifiers - Struct specifiers
 * @specifier: The conversion specifier
 * @f: The function pointer
 *
 */
typedef struct specifiers

{

	char *specifier;

	int (*f)(va_list args);

} spc_dt;

int _printf(const char *format, ...);

void putchar(char c);
int _print_a_char(va_list args);

int _print_a_string(va_list args);

#endif /*MAIN_H*/

