#include <iostream>
using namespace std;
int main()
{
	int n,h,z;
	while (cin>>n>>h>>z)
	{
		int a;
		a=(z-2*h)/2;
		//���Ұ�ø���a
		//������aֻҰ�ã�n���˷�
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
