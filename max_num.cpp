
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

		scanf("%s %d",a,&z);//��һ������̫����������ַ�����������

		m=strlen(a)-z;//����ɾ��m�����ֺ󣬻�ʣ���ٸ�����

		j=0;

		while(m--)

		{

			max=-1;

			for(i=j; i<strlen(a)-m; i++)//ע��i<strlen(a)-m,���>�Ļ���ʣ�µ����ֲ����Թ�������Ҫ�����֡�Ӧ������ѡ�����λ�������֣���ͬʱҲҪ��֤������λ���㹻�������Ҫ������

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

