#include <iostream>
using namespace std;
int strlen(char *a)
{
	int n;
	for (int x=0;*(a+x)!='\0';x++)
	{
		n=x;
	}
	return n+1;
}
int main()
{
	char c[100];
	cin>>c;
	cout<<strlen(c);
	return 0;
}
