#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src:  source string
 *
 * Return: result
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int l;
	char *result;

	for (i = 0; i != '\0'; i++)
	{
		result += src[i];
	}
	for (l = 0; l != '\0'; l++)
	{
		result += dest[l];
	}
	result +=  '\0';
	return (result);
}
