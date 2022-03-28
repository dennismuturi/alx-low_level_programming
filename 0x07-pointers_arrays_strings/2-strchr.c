/**
 * _strchr - locates a character in a string
 * @s: Input string
 * @c: character to locate
 *
 * Return: a pointer of c or NULL 
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else
		{
			return (NULL);
		}
	}
	return ('\0');
}
