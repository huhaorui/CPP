#include <bits/stdc++.h>
using namespace std;
int main()
{
	float x,eps,sin1,sin0,temp;
	int n=1,fh=1;
	cout<<"Please enter the x and eps:"<<endl;
	cin>>x;
	cin>>eps;
	if ((x>10)||(x<0))
	{
		cout<<"x error";
		return 0;
	}
	sin0=sin(x);
	do
	{
		temp=fh*pow(x,2*n-1);
		fh=-fh; 
		for (int k=1;k<=2*n-1;k++)
		{
			temp=temp/k;
		}
		sin1=sin1+temp;
		cout<<temp<<endl; 
		n++; 
	} 
	while (abs(sin1-sin0)>eps);
	cout<<"sin(x)="<<setprecision(3)<<sin1;
	return 0; 
}
