#include "holberton.h"
/**
 * print_array - prints elements of an array of integers
 *@a: variable
 *@n: number of elements of the array
 */
void print_array(int *a, int n)

{
	int i;

	for (i = 0; i < n; i++)
		if (i == 0)
		{
			printf("%d", *(a + i));
		}
		else
		{
			printf(", %d", *(a + i));
		}
	putchar(10);
}
