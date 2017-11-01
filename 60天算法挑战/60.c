//https://www.bilibili.com/read/cv39356
// 改写为c的语法实验
//第60天

#include<stdio.h>
#include<string.h>
#define MAX 100
int main(void)
{
    int s[MAX];
    char a;
    int i=0, j=0, k=0, num;
	printf("请输入小于100个字符，输入#结束\n");
    while((s[i++]=getchar())!='\n');
    s[--i]='\0';
    num = i;
    if(*s==0)
    {
        printf("Empty String");
        return 0;
    }

    
    for(i=0;i<num;i++)
    {
	    for(j=0;j<num;j++)
	    {
	        if(s[j]==s[j+1])
	            for(k=j;k<num;k++)
	                s[k]=s[k+2];
	    }
	    if(s[i]=='\0')break;
    }
	if(*s=='\0'){
	    printf("Empty String");
	    return 0;
	}
	for(i=0;;i++)
    {
		if(s[i]=='\0')break;
		putchar(s[i]);
    }
	return 0;
}
