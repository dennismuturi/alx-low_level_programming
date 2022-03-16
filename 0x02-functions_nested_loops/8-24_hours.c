#include "main.h"


void jack_bauer(void)
{
	int hr='00';
	int min;
	for (min = '00' ;min <= '60';min++)
	{	
		min=min + '1';
		if (min == '60')
		{
			hr=hr + '1';
			min='00';
		
		}

		_putchar(hr);
		_putchar(':');
		_putchar(min);
		_putchar('\n');

	}

}
