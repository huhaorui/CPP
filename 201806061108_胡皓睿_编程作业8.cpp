#include <iostream>
using namespace std;
int main()
{
	int num[10];
	int t=10;
	cout<<"Please enter ten numbers:"<<endl;
	for (int x=0;x<t;x++)
	{
		cin>>num[x];
		if (num[x]<0)
		{
			t--;
			x--;
		}
	}
	for (int x=t-1;x>=0;x--)
	{
		cout<<num[x]<<' ';
	}
	if (t==0) cout<<"No number can be print";
	cout<<endl;
	return 0;
}
