//�㷨��ս�ڶ��죺�Ѷȼ򵥡�
//��������
//https://www.bilibili.com/read/cv41172
//c���԰汾��д

#include <stdio.h>
int main(void)
{
	int i=0;
	int N,K;
	scanf("%d",&N);
	char S[N];
	scanf(" %s",S);
	scanf("%d",&K);
	
	for(i=0;i<N;i++)
	{
		if(S[i]>='a'&&S[i]<='z')
		{
			if((S[i]+K)>'z')
				S[i]=S[i]+K-'z'+'a'-1;
			else
				S[i]=S[i]+K;
		}
		if(S[i]>='A'&&S[i]<='Z')
		{
			if((S[i]+K)>'Z')
				S[i]=S[i]+K-'z'+'a'-1;
			else
				S[i]=S[i]+K;
		}
	}
	printf("%s",S);

	return 0;
}
