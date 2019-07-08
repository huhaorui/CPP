#include <iostream>
using namespace std;
int main()
{
	int n,m;
	bool flag;
	cin>>n;
	for (int k=0;k<n;k++)
	{
		flag=true;
		cin>>m;
		while ((m>1)&&(flag))
		{
			flag=!(m%2);
			m=m/2;
		}
		if (flag) cout<<"yes"<<endl; 
		else cout<<"no"<<endl;
		flag=true;
	}
	return 0;
}
