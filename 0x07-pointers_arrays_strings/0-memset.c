/**
 * _memset - fills memory with constant byte
 * @s: pointer to the blank memory area
 * @b: constant byte
 * @n: number of bytes
 *
 * Return a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
