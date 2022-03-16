#include "main.h"


int _abs(int x)
{	
	if (x > 0)
	{
		_putchar(x);
	}
	else if (x < 0)
	{
		int multiply=x * 2;
		int result=x - (multiply);
	        _putchar(result);	
	
	}




	return(0);

}
