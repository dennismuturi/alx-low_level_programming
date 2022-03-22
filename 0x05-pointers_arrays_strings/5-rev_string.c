#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: a string
 */
void rev_string(char *s)
{
	int i;
	int l;
	
	while (s[i] != '\0')
	{
		i++;
	}
	for (l = i - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}
}
