/* post_ pre.c -- ºó×ººÍÇ°×º*/

#include <stdio.h>

int main(void)
{
	int a = 1,b = 1;
	int aplus, plusb;
	
	aplus = a++;
	plusb = ++b;
	printf("a aplus b plusb \n");
	printf("%ld %5d %ld %5d\n", a, aplus, 
			b, plusb);
	
	return 0;
}
