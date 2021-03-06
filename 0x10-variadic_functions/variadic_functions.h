#ifndef VARIADIC_fUNCTION_H
#define VARIADIC_FUNCTION_H
/**
 * variadic_function - accepts a variable number of arguments
 */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct t_arg
{
	char *t_arg;
	void (*f)(va_list);
}t_argjr;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
