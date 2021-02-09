#include <stdio.h>
int main()
{
	int t,a,b;
	int x=0;
	scanf("%d",&t);
	while (x<t)
	{
		x++;
		scanf("%d%d",&a,&b);
		printf("%d\n",a+b);
	}
	return 0;
} 
