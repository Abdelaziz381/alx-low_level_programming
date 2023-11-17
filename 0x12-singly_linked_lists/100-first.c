#include<stdio.h>

/**
 * StartFun - Apply the constructor attribute to myStartupFun() so that it
 *   is executed before main()
 */
void StartFun(void) __attribute__ ((constructor));

/**
 * StartFun - implementation of myStartupFun
 */
void StartFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
