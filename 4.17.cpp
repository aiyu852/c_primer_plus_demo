/* skip2.c -- 跳过输入的头两个整数*/

#include <stddio.h>
int main(void)
{
	int n;
	
	printf("Please enter three intergers: \n");
	scanf("%*d %*d %d*", &n);
	printf("The last interger was %d\n", n);
	return 0;
}
