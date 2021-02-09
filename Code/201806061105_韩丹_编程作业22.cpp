#include <iostream>
#include <cmath>
using namespace std;
bool isss(int n)
{
	if (n==2) return true; 
	if (n%2==0||n==1) return false;
	for (int x=3;x<=sqrt(n);x+=2)
	{
		if (n%x==0) return false;
	}
	return true;
}
void sort(int n[],int l)
{
	int temp;
	for (int x=0;x<l;x++)
		for (int y=0;y<l-x;y++)
			if (n[y]>n[y+1])
			{
				temp=n[y];
				n[y]=n[y+1];
				n[y+1]=temp;
			} 
}
int main()
{
	int n,num[100];
	cin>>n;
	for (int x=0;x<n;x++)
	{
		cin>>num[x];
	}
	sort(num,n);
	for (int x=0;x<n;x++)
	{
		if (isss(num[x]))
		{
			cout<<num[x]<<' ';
		}
	}
	return 0;
}
