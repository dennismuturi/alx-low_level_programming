/**
 * _strspn - gets the length of a prefix substring
 * @s: Inputed string
 * @accept: substring
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int pos = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; i++)
		{
			if (accept[j] == s[i])
			{
				pos++;
			}
		}
	}
	return (pos);
}
