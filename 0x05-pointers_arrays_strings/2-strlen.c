#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: a string
 * Return: the length of a string
 */
int _strlen(char *s)
{	char str_arr[] = *s;
	int i;
	int str_len = 0;

	for (i = 0; str_arr[i] != '\0'; i++)
	{
		str_len++;
	}
	return (str_len);
}
