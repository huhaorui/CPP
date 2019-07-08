#include <bits/stdc++.h>
using namespace std;
class ARR
{
	private:
		int n;
		int a[100];
	public:
		ARR(int x[],int size);
		void change();
		void show();
};
ARR::ARR(int x[],int size)
{
	for (int i=0;i<size;i++)
	{
		a[i]=x[i];
	}
	n=size;
}
void ARR::change()
{
	int l=0,r=9;
	while (l<r)
	{
		while (a[l]<0&&l<=r)
		{
			l++;
		}
		while (a[r]>=0&&l<=r)
		{
			r--;
		}
		if (l<r) 
		{
			int tmp=a[l];
			a[l]=a[r];
			a[r]=tmp;
		}
	}
}
void ARR::show()
{
	for (int x=0;x<10;x++)
	{
		cout<<setw(4)<<a[x];
	}
	cout<<'\n';
}
int main()
{
	int num[10];
	for (int x=0;x<10;x++)
	{
		cin>>num[x];
	}
	ARR v(num,10);
	v.show();
	v.change();
	v.show();
	return 0;
}
