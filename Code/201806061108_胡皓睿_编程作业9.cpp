#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int a;
	int b[100];
	int t;
	cout<<"Please enter a number:";
	while (cin>>a&&a>0)
	{
		memset(b,0,sizeof(b));
		t=0;
		while (a>0)
		{
			b[t]=a%2;
			t++;
			a/=2;
		}
		for (int x=t-1;x>=0;x--)
		{
			cout<<b[x];
		}
		cout<<endl<<"Please enter a number:";
	}
	cout<<"Bye"<<endl;
	return 0;
}
