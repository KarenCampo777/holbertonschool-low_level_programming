#include "holberton.h"
/**
 * _print_rev_recursion - Entry point
 * @s: string in the function
 * Return: 0 on success
 */
void _print_rev_recursion(char *s)

{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
