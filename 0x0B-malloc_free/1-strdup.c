#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory which contains a copy of the string given as a parameter
 * @str: Input string
 * Return: pointer to the string or 0 if no string
 */
char *_strdup(char *str)
{
	int size = strlen(str);
	char *arrdup;

	if (str == "")
	{
		return (0);
	}
	else
	{
		str = malloc(sizeof(char) * size + 1);
		arrdup = str;
		return (arrdup);
	}
}
