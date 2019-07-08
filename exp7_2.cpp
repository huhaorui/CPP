#include <iostream>
#include <cstring>
using namespace std;
void partcpy(char a[100],char b[100],int n)
{
	for (int x=0;x<strlen(a)-n;x++)
	{
		b[x]=a[x+n];
	}
	b[strlen(a)-n]='\0';
}
int main()
{
	char a[100],b[100];
	int n;
	cin>>a;
	cin>>n;
	partcpy(a,b,n);
	cout<<b;
	return 0;
}
