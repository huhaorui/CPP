#include <iostream>
using namespace std;
void strcpy_me(char a[],char b[],int n)
{
	for (int x=0;x<n;x++)
		b[x]=a[x];
	b[n]='\0';
}
int main()
{
	char s1[100],s2[100];
	int n;
	cin>>s1;
	cin>>n;
	strcpy_me(s1,s2,n);
	cout<<s2;
	return 0;
}
