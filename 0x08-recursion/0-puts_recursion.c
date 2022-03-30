#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: Input string
 */
void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);
	_putchar('\n');
	i++;
	if (s[i] != '\n')
	{
		_puts_recursion(s + i);
	}
}

