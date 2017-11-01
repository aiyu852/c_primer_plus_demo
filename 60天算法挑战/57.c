//https://www.bilibili.com/read/cv43593
//算法挑战第57天
//Hackerland无线电发射机（中等）

#include <stdio.h>
int main(void)
{
	int n, k, i=0, p, sum=0;
	scanf("%d %d",&n, &k);
	int num[n];
	while(i<n)scanf(" %d",&num[i++]);
	
//	int n=5, k=1, i=0, p, sum=0;
//	int num[5]={1,2,3,4,5};
	
	for(i=0;i<n;)
	{
		if((num[i]+k)==num[i+1])
			{
				i++;
				p=i;
				for(;(num[p]+k)>=num[i];i++);
				sum++;
			}
		else if((num[i]+k)<num[i+1])
		{
			i++;
			sum++;
		}
		else if((num[i]+k)>num[i+1])
		{
			p=i;
			for(;(num[p]+2*k)>=num[i];i++);
			sum++;
		}
	}
	printf("%d",sum);
	
	return 0;
}
