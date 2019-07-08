#include <iostream>
using namespace std;
int main()
{
	int n,w[1000],a=0,b=0,c0=0,c5=0;
	cin>>n;
	for (int x=0;x<n;x++)
	{
		cin>>w[x];
	}
	for (int x=0;x<n;x++)
	{
		if (w[x]==0) b+=1;
		if (w[x]==5) a+=1;
	}
	if ((a>8)&&(b!=0))
	{
		c5=(a/9)*9;
		c0=b;
	}
	else if ((a<9)&&(b!=0))
	{
		c5=0;
		c0=1;
	}
	else 
	{
		cout<<"-1";
	}
	for (int x=0;x<c5;x++)
	{
		cout<<'5';
	}
	for (int x=0;x<c0;x++)
	{
		cout<<'0';
	}
}
