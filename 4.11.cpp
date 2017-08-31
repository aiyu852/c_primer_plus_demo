/* intconv.c -- 一些不匹配的整数转换 */
#include <stdio.h>
#define PAGES 336
#define WORDS 65618
int main (void)
{
	short num = PAGES;
	short mnum = -PAGES;
	
	printf("num as short amd unsigned short: %hd %hu\n", num, numm);
	printf("-num as short and unsigned short :%hsd %hu\n", mnum, mnum);
	return 0;
}