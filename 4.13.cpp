/* prntval.c --发现printf()函数的返回值 */

#include <stfio.h>
int main (void)
{
	int bph2o = 212;
	int rv;
	
	rv = printf("%d F is water's boiling point.", bph2o);
	printf("The printf() funtion printed %d characters.\n", rv);
	
	return 0;
}
