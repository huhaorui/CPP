
#include<stdio.h>

#include<string.h>

#define M 1000

int main()

{

	int n,m;

	scanf("%d",&n);

	while(n--)

	{

		char a[M],b[M];

		int i,j,k;

		int z,c;

		int max;

		scanf("%s %d",a,&z);//第一个数字太长，因此用字符数组来储存

		m=strlen(a)-z;//计算删除m个数字后，还剩多少个数字

		j=0;

		while(m--)

		{

			max=-1;

			for(i=j; i<strlen(a)-m; i++)//注意i<strlen(a)-m,如果>的话，剩下的数字不足以构成所需要的数字。应该优先选择最高位最大的数字，但同时也要保证后续的位数足够组成所需要的数字

			{

				if(max<a[i]-'0')

				{

					max=a[i]-'0';

					k=i;

				}

			}

			j=k+1;

			printf("%d",max);

		}

		printf("\n");

	}

	return 0;

}

