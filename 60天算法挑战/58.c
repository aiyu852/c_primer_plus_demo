//https://www.bilibili.com/read/cv41354
//算法挑战第58天
//贪婪花店
#include<stdio.h>
void sorted(int []);
void change(int [], int []);
int n=0;
int main(void)
{
	int k, i=0, j, x;
	int cost=0;
	scanf("%d %d",&n, &k);
	int num[n];
	while(i<n)scanf(" %d",&num[i++]);
	sorted(num);
//	for(i=0;i<n;i++)
//		printf("%d\t",num[i]);
	i=n;
	for(x=1;;x++){
		for(j=k;j>0;j--){
			cost+=num[i-1]*x;
			i--;
			if(i<=0)break;
		}
		if(i<=0)break;
	}
	printf("%d",cost);
	
	return 0;
}
void sorted(int num[])
{
	int i=0, j=0;
	for(i=0;i<=n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(num[i]>num[j]){
				change(&num[i], &num[j]);
				i=j;
			}
				
		}
	}
}

void change(int num1[], int num2[])
{
	int * temp;
	*temp = *num1;
	*num1 = *num2;
	*num2 = *temp;
}
