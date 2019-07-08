#include <iostream>
#include <algorithm> 
using namespace std;
int main()
{
	int n,t=0,total=0;
	int b[1000];
	cin>>n;
	for (int k=0 ; k < n ; k++)
	{
		cin>>b[k];
	}
	sort(b,b+n);
	for (int k=0 ; k < n ; k++)
	{
		total=total+b[k];
		t=t+total;
	}
	cout<<t;
}
