#include <iostream>
using namespace std;
int main()
{
	int n,h,z;
	while (cin>>n>>h>>z)
	{
		int a;
		a=(z-2*h)/2;
		//求出野兔个数a
		//现在有a只野兔，n个人分
		if (a>n&&a<2*n) 
		{
			cout<<"yes\n";
		}
		else
		{
			cout<<"no\n";
		}
	}
}
