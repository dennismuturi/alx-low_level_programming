#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: arguments counter
 * @argv: arguments values
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
