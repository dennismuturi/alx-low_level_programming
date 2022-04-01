#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiples two numbers
 * @argc: arguments counter
 * @argv: arguments value
 * Return: 0 on success 1 on failure
 */
int main (int argc, char *argv[])
{
	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
