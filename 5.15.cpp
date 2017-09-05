/* pound.c -- 定义带有一个参数的函数*/
#include <stiod.h>
void pound(int n);
int main(void)
{
	int time = 5;
	char ch = '!';
	float f = 6.0;
	pound (times);
	pound (ch);
	pound ((int) f);
	return 0;
} 

void pound (int n)
{
	while (n-- > 0)
		printf("#");
	printf("\n");
}
