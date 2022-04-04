#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of characters and initializes it with a specific char
 * @c: array of characters
 * @size: the size of the memory to print
 * Return: 0 if false or pointer to array if True
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (0);
	}
	else
	{
		arr = malloc(sizeof(char) * size);
		for (i = 0; i <= size; i++)
		{
			arr[i] += c;
		}
		return (arr);
	}
}
