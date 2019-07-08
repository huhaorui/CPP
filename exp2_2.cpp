#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	double sum=0;
	cout<<"Please enter the n:";
	cin>>n;
	for (int x=1;x<=n;x++)
	{
		sum=sum+1.0/x;
	}
	cout<<"sum="<<fixed<<setprecision(3)<<sum;
	return 0;
}
