#include <bits/stdc++.h>
using namespace std;
void f(int a,int b)
{
	int n;
	for (int x=a;x>0;x--)
	{
		if (a%x==0&&b%x==0)
		{
			n=x;
			break;
		}
	}
	cout<<a/n<<'/'<<b/n<<endl;
}
int main()
{
	int n;
	while (cin>>n)
	{
		cout<<"***"<<n<<"***"<<endl;
		cout<<"0/"<<n<<endl;
		for (int x=1;x<=n;x++)
		{
			f(x,n);
		}
	}
	return 0;
}
