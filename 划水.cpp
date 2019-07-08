#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,num[100];
	char a[100];
	for (int x=0;x<100;x++)
	{
		num[x]=0;
	}
	cin>>n;
	while (n--)
	{
		cin>>a;
		num[strlen(a)]++;
	}
	for (int x=0;x<100;x++)
	{
		if (num[x]!=0)
		{
			cout<<x<<':'<<num[x]<<endl;
		}
	}
	return 0;
}
