#ifndef __VARIADIC_H_
#define __VARIADIC_H_

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct base - struct that allocates the formats.
 * @print: char to print entries.
 * @f_var: variadic function(print).
 */
typedef struct base
{
	char *print;
	void (*f_var)();
} base;

void print_char(va_list list);
void print_int(va_list list);
void print_float(va_list list);
void print_string(va_list list);

#endif /* __VARIADIC_H_ */
