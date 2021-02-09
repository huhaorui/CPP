#include <iostream>
#include <cstdlib>
using namespace std;
void swap(int *x,int *y)
{
	int tmp=*x;
	*x=*y;
	*y=tmp;
}
void sort_array(int num[],int n)
{
	for (int i=0;i<n;i++)
		for (int j=0;j<n-i;j++)
			if (num[j]>num[j+1]) 
				Zswap(&num[j],&num[j+1]);
}
int main()
{
	int num[100],n;
	cin>>n;
	for (int x=0;x<n;x++)
		num[x]=rand();
	sort_array(num,n);
	for (int x=0;x<n;x++)
		cout<<num[x]<<endl;
	return 0;
}
