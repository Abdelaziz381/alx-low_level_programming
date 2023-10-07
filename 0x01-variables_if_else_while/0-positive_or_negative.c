#include <stdlib.h>
#include <time.h>
/* more headers goes there

/* betty style doc for function main goes there
*if the number is greater than 0: is positive
*if the number is 0: is zero
*if the number is less than 0: is negative
* */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

if (n > 0)
{   
        printf("is positive \n");
}
    else if (n = 0)  
{
        printf("is zore \n");
}
    else if (n < 0)  
{
        printf("is nigative \n");    
}
	return (0);
}
