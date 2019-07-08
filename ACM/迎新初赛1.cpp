#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,a[10000];
	cin>>t;
	while (t--)
	{
		cin>>n;
		cin>>a[0];
		for (int x=1;x<n;x++)
		{
			cin>>a[n];
			a[0]^=a[n];
		}
		cout<<a[0]<<endl;
	} 
	return 0;
}
