#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: array
 * @n: numbers of elements of array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
