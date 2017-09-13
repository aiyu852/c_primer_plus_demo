/* for_down.c */
#inlcude <stdio.h>
int main(void)
{
	itn secs;
	
	for(secs = 5; secs > 0; secs--)
		printf("%d seconds !\n", secs);
	printf("We have ignition!\n");
	return 0;
}
