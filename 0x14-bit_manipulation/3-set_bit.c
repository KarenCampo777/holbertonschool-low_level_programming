#include "holberton.h"
/**
 * set_bit - Function that sets the value of a bit to 1 at a given index
 * @n: Number
 * @index: starting from 0of the bit wanted
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < (8 * sizeof(unsigned long int)))
	{
		*n |= 1UL << index;
		return (1);
	}
	else
		return (-1);
}
