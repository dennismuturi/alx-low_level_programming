#include "main.h"


void jack_bauer(void)
{
	int hr=4848;
	int min;
	for (min = 4848 ;min <= 5448;min++)
	{	
		min=min + 4849;
		if (min == 5448)
		{
			hr=hr + 4849;
			min=4848;
		
		}

		_putchar(hr);
		_putchar(':');
		_putchar(min);
		_putchar('\n');

	}

}
