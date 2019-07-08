#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,x;
	float sum=0,num,xx=0,k=0;
	char a[305];
	cin>>t;
	while (t--)
	{
		cin>>a;
		for (x=1;a[x]!='.';x++)
		{
			sum=sum*10+a[t]-48;
		}
		int w=x;
		for (x=x+1;a[x]!='E';x++)
		{
			xx=xx+(a[x]-48)*pow(10,-(x-w));
		}
		sum+=xx;
		if (a[x]=='+')
		{
			for (x=x+1;a[x]!='\0';x++)
			{
				k=k*10+a[x]-48;
				if (a[0]=='-')
					cout<<'-';
				cout<<sum*pow(10,k);
			}
		}
		else
		{
			for (x=x+1;a[x]!='\0';x++)
			{
				k=k*10+a[x]-48;
				if (a[0]=='-')
					cout<<'-';
				cout<<sum*pow(10,-k);
			}
		}
	}
	return 0;
}
