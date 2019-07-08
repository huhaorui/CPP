#include <bits/stdc++.h>
using namespace std;
class Array
{
	private:
		int x[4][4];
		int count;
	public:
		Array(int n[]);
		int fun(int n);
		void encode();
		void print();
};
Array::Array(int n[])
{
	for (int i=0;i<4;i++)
		for (int j=0;j<4;j++)
		{
			x[i][j]=n[4*i+j];
		}
	count=0;
}
int Array::fun(int n)
{
	if (n==1||n==0) return 0;
	for (int x=2;x<=int(sqrt(n));x++)
	{
		if (n%x==0) return 0;
	}
	return 1;
}
void Array::encode()
{
	for (int i=0;i<4;i++)
	{
		for (int j=0;j<=i;j++)
		{
			if (fun(x[i][j]))
			{
				count++;
				for (int t=x[i][j]+1;;t++)
				{
					if (fun(t))
					{
						x[i][j]=t;
						break;
					}
				}
			}
		}
	}
}
void Array::print()
{
	cout<<"count="<<count<<'\n';
	for (int i=0;i<4;i++)
	{
		for (int j=0;j<4;j++)
		{
			cout<<x[i][j]<<'\t';
		}
		cout<<'\n';
	}
}
int main()
{
	int num[16];
	for (int x=0;x<16;x++)
	{
		cin>>num[x];
	}
	for (int x=0;x<4;x++)
	{
		for (int y=0;y<4;y++)
		{
			cout<<num[x*4+y]<<'\t';
		}
		cout<<'\n';
	}
	cout<<'\n';
	Array A(num);
	A.encode();
	A.print();
	return 0;
}
