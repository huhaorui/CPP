#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d;
	if (d>=b)
	{
	//	cout<<">"<<endl;
		e=c-a;
		f=d-b;
	} 
	else
	{
	//	cout<<"<"<<endl;
		e=c-a-1;
		f=d-b+60; 
	}
	cout<<e<<" "<<f;
	return 0;
 } 
