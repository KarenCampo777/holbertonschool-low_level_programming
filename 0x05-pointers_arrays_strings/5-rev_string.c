#include <stdio.h>
/**
 * rev_string - prints reverse string.
 * @s: char s
 * Return: 0 on success
 */
void rev_string(char *s)

{
	int i, size, count = 0;
	char temp;

	for (size = 0; s[size] != '\0'; size++)
	{
	}
	for (i = size - 1; count < i; i--)
	{
		temp = s[count];
		*(s + count) = s[i];
		s[i] = temp;
		count++;
	}
}
