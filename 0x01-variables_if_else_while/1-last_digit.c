#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/*main -First Entry
 *
 * return(0) - sucess
 
 * */

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	

        lastDigit= n % 10;

        if( lastDigit > 5 )
		printf("Last Digit of %d is %d and is greater than 5",n,lastDigit);
	
	
	else if ( lastDigit == 0 )
		printf("Last Digit of %d is %d and is 0",n,lastDigit);
	
	
	else if ( (lastDigit != 0) && (lastDigit < 6 ))
		printf("Last Digit of %d is %d and is less than 6 and 0",n,lastDigit);

	return (0);

 

}
