#include <iostream>
using namespace std;
int main()
{
	int a[6],b[6],c[6];
	int max=0,day=0;
	for (int x=0;x<7;x++)
	{
		cin>>a[x]>>b[x];
	}
	for (int x=0;x<7;x++)
	{
		c[x]=a[x]+b[x];
//		cout<<c[x]<<endl;
	}
	for (int x=0;x<7;x++)
	{
		if ((c[x]>8)&&(c[x]>max))
		{
			max=c[x];
			day=x+1;
		}

	}
	cout<<day;
}
