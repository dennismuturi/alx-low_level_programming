#include "main.h"
#include <stdio.h>
/**
 * main - prints it's name followed by new name
 * @argc: an argument counter
 * @argv: an argument values
 * Return: 0 success
 */
int main (int argc, char* argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
