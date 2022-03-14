#include <stdio.h>

/**
 * main - a simple program that prints all posssible combinations of two digits
 *
 * Return: 0 on success
 */

int main(void)


{

        int num1;
	int num2;
        for(num1 ='0';num1 <='9';num1++)
        {


        for(num2 = '0';num2 <= '9'; num2++)
	{
	
		if((num1 != num2) && (num1 < num2) )
		{
		
			putchar(num1);
			putchar(num2);
			putchar(',');
			putchar('\x20');
		}
	
	
	}

        }

	putchar('\n');

     


        return(0);


}



