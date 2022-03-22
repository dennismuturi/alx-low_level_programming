#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: a string
 */
void rev_string(char *s)
{

	int i = 0;
	int l;
	char origin;
	char rev;

	while (s[i] != '\0')
	{
		origin = s[i];
		_putchar(origin);
		i++;
	}
	_putchar('\n');

	for (l = i - 1; l >= 0; l--)
	{
		rev = s[l];
		_putchar(rev);
	}
}
