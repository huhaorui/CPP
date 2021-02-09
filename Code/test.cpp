#include <iostream>
using namespace std;
int f(int *a)
{
	cout<<*a;
	return 0;
}
int main()
{
	int a[5][5];
	int *p_a=&(a[0][0]);
	a[0][0]=1;
	cout<<&a[0][0];
	cout<<endl;
	cout<<a;
	f(*a);
}
