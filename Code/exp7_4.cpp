#include <iostream>
using namespace std;
int calc_sum(int a[]) 
{
	return *(a)+*(a+1)+*(a+2);
}
int main()
{
	int num[3][3];
	int sum=0;
	for (int x=0;x<3;x++)
		for (int y=0;y<3;y++)
			cin>>*(*(num+x)+y);
	for (int x=0;x<3;x++)
	{
		sum+=calc_sum(num[x]);
	}
	cout<<sum;
	return 0;
}
