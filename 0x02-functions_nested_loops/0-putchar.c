#include "main.h"
#include <stdio.h>

/**
 * main -function _putchar prints to the standard output
 * return(0)-success 
 */

int main(void)
{

	char * text="_putchar";
	int i=0;
	while(text[i] != '\0')
	{
		_putchar(text[i]);
		i++;

        }
        
	_putchar('\n');

        return (0);
	
}

