#include "holberton.h"
/**
 * _puts_recursion - Entry point
 * @s: string to print
 * Return: 0 on success
 */
void _puts_recursion(char *s)

{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar(10);
}
