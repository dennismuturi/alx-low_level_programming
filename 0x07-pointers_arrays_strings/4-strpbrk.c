/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: substring
 * Return: pointer to the byte in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + 1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
