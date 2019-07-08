#include <bits/stdc++.h>
using namespace std;
class ARRAY
{
	private:
		int a[5];
		int n;
	public:
		ARRAY (int t[],int n1);
		int num(int n);
		void fun();
		void print();
};
ARRAY::ARRAY(int t[],int n1)
{
	for (int x=0;x<n1;x++)
	{
		a[x]=t[x];
	}
	n=n1;
}
int ARRAY::num(int n)
{
	int t=0,w=n;
	while (w>0)
	{
		t++;
		w/=10;
	}
	n=n%(int)(pow(10,t-1));
	return n;
}
void ARRAY::fun()
{
	for (int i=0;i<n-1;i++)
	{
		for (int j=0;j<n-1-i;j++)
		{
			if (num(a[j])>num((a[j+1])))
			{
				int tmp=a[j+1];
				a[j+1]=a[j];
				a[j]=tmp;
			}
		}
	}
}
void ARRAY::print()
{
	cout<<"处理后的原数组：";
	for (int x=0;x<n;x++)
	{
		cout<<a[x]<<'\t';
	}
	cout<<'\n';
}
void print(int num[],int n)
{
	cout<<"原数组：";
	for (int x=0;x<n;x++)
	{
		cout<<num[x]<<'\t';
	}
	cout<<'\n';
}
int main()
{
	int num[5];
	for (int x=0;x<5;x++)
	{
		cin>>num[x];
	}
	print(num,5);
	ARRAY A(num,5);
	A.fun();
	A.print();
	return 0;
}
