#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int k,n=0,a[10];
	for (int x=0;x<10;x++)
		cin>>a[x];
	cin>>k;
	for (int x=0;x<10;x++)
		if (k+30-a[x]>=0) n+=1;
	cout<<n;
	return 0;
} 
