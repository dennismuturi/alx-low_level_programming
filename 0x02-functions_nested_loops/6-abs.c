#include "main.h"


int _abs(int x)
{	
	if (x > 0)
	{
		return(x);
	}
	else if (x < 0)
	{
		int add=x + (x);
		int result=x - (add);
	        return(result);	
	
	}




	return(0);

}
