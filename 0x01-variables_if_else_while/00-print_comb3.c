#include <stdio.h>
#include <stdlib.h>

/* main - Entry of the Program
 * return(0) - Success
 *
 */
 
int main(void)
{

	int num1;
	int num2;

	for(num1 = 0;num1 <= 9;num1 ++)
	{
	
	putchar(num1);


         for(num2 = 0;num2 <=9; num2 ++)
	 {
	 
	 if((num1 != num2) && (num1 < num2))
	 {
		 putchar(num2);
	 
	 
	 }
	 
	 }	 
     
	 }

	 putchar(',');




}
