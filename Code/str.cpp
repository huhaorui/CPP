#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	int i;
	cin>>i;
	int t=i/100000;
	if (t>10) t=10; 
	switch (t)
	{
		case 10:sum+=(i-1000000)*0.01;i=1000000;
		case 9:
		case 8:
		case 7:
		case 6:sum+=(i-600000)*0.015;i=600000;
		case 5:
		case 4:sum+=(i-400000)*0.03;i=400000;
		case 3:
		case 2:sum+=(i-200000)*0.05;i=200000;
		case 1:sum+=(i-100000)*0.075;i=100000;
		case 0:sum+=i*0.1;
	}
	cout<<sum;
	return 0;
}
