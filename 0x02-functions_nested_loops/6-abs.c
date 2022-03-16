#include "main.h"


int _abs(int x)
{	
	if (x > 0)
	{
		_putchar(x);
	}
	else if (x < 0)
	{
		int add=x + x;
		int result=x - (add);
	        _putchar(result);	
	
	}




	return(0);

}
