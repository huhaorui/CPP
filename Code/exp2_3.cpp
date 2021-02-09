#include <iostream>
using namespace std;
int main()
{
	int n,w;
	int sum=0;
	cin>>n;
	for (int k=0;k<n;k++)
	{
		for (int t=0;t<5;t++)
		{
			cin>>w;
			sum+=w;
		}
		sum%=26;
		cout<<(char)(sum+97)<<endl;
		sum=0;
	}
	return 0;
}
