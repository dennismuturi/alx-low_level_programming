/**
 * _strstr - locates a substring
 * @haystack: original substring
 * @needle: substring
 * Return: pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
			{
				return (&needle[j]);
			}
			j++;
		}
		i++
	}
	return ('\0');
}
