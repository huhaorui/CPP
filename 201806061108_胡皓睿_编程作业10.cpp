#include <iostream>
#define k 10000
using namespace std;
int main()
{
	int a[k],b[k],m,n,i=0,j=0;
	bool flag=true;
	cin>>m>>n;
	for (int x=0;x<m;x++)
	{
		cin>>a[x];
	}
	for (int x=0;x<n;x++)
	{
		cin>>b[x];
	}
	while (i<m&&j<n)
	{
		if (a[i]==b[j])
		{
			cout<<a[i]<<" ";
			i++;
			j++; 
			flag=false; 
		}
		else if (a[i]>b[j])
		{
			j++;
		}
		else
		{
			i++;
		}
	}
	if (flag) cout<<"NO";
	return 0;
}
