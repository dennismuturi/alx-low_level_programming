#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers
 * @argc: arguments counter
 * @argv: arguments values
 * Return: 0 on Success 1 on Failure
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(atoi(argv[i]))
				{
				printf("%d\n", 0);
				printf("Error\n");
				return (1);
				}
				else
				{
				sum += atoi(argv[i]);
				}
	}
	printf("%d\n", sum);
	return (0);
}
