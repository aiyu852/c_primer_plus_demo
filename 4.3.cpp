/* praise2.c*/

#include <stdio.h>
#include <string.h>
#define PRAISE "What a super marvelous name"

int main(void)
{
	char name[100];
	
	printf("What's your name?\n");
	scanf("%s", name);
	printf("Hello , %s. %s\n", name, PRAISE);
	printf("The phrase of praise has %d letters", strlen(PRAISE));
	printf("and occupied %d money cells.\n", sizeof PRAISE);
	return 0;
} 
