#include <iostream>
using namespace std;
int converts (char s[])
{
	int num=0;
	for (int x=0;s[x]!='\0';x++)
		num=num*10+s[x]-48;
	return num;
}
int main()
{
	char n[4];
	cin>>n;
	int num=converts(n);
	cout<<num;
	return 0;
}
