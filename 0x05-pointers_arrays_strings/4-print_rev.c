#include "main.h"
/**
 * print_rev - function prints a string in reverse, followed by a newline
 * @s: a string
 */

int _strlen(char *s)
{
	int i;
	int str_len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{	
		str_len++;
	}
	return (str_len);
}	
void print_rev(char *s)
{

	int l = _strlen(s);

	for (; s[l]; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
