#include <stdio.h>
/*main- Entry of the Program
 * Return(0)-Success of program
 *
 */

int main(void)
{

	char c;
	for(c='a';c<='z';++c)
	{
		if((c !='e') && (c !='q'))
			putchar(c);
	}
           
         putchar('\n');

return(0);

}
