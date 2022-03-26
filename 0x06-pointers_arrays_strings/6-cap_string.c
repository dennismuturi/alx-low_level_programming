#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: Input string
 * Return: 0
 */
char *cap_string(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		else
		{
			str[i] = str[i];
		}
		i++;
	}
	return (str);
}
