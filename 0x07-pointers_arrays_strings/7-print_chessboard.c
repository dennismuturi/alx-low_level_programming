/**
 * _chessboard - prints the chessboard
 * @a: rows and columns
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
        int j = 0;
	
	while (a[i] != '\0')
	{
		while (a[j] != '\0')
		{
			_putchar(a[i]);
			_putchar(a[j]);
		}
		_putchar('\n');
	}
}
