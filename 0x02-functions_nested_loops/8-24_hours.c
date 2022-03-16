#include "main.h"


void jack_bauer(void)
{
	int hr=48;
	int min;
	for (min = 48 ;min <= 108;min++)
	{	
		min=min + 49;
		if (min == 108)
		{
			hr=hr +49;
			min=48;
		
		}

		_putchar(hr);
		_putchar(':');
		_putchar(min);
		_putchar('\n');

	}

}
