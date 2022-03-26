#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters of a string to uppercase
 *
 */
char *string_toupper(char *str)
{
	int s_len = 0;
	int i;
	char *result = " ";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 'a' && str[i] > 'z')
		{
			result = str[i] - 32;
			_putchar(result);
		}
	}
	_putchar('\0');
}
        
