// 3.3 bases.c -- 以十进制、八进制、和十六进制形式输出 100

#include <stdio.h>

int main (void)
{
	int x = 100;
	printf("dec = %d; octal = %o; hex = %x\n", x, x,x);
	printf("dex = $d; octal = %#o; hex = %#x\n", x, x, x);
	return 0;
} 
