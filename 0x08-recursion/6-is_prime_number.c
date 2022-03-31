#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number or 0
 * @n: Input number
 * Return: 1 if it's true or 0 if false
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n == 1)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (0);
	}
	else if ((n % i) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
