#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int m,n,i;
	cout<<"please enter ten numbers.\n";
	for(i=1,n=0;i<=10;i++)
	{
		cin>>m;
		if(m%3==0)
		n++;
		
	}
	cout<<n;
	return 0;
}
