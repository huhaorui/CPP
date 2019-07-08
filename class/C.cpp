#include <bits/stdc++.h>
using namespace std;
class ARRAY
{
	private:
		float a[10],b[10];
	public:
		ARRAY(float t[10]);
		void process();
		void print();
};
ARRAY::ARRAY(float t[10])
{
	for (int x=0;x<10;x++)
	{
		a[x]=t[x];
	}
}
void ARRAY::process()
{
	for (int x=0;x<10;x++)
	{
		b[x]=(a[(x+9)%10]+a[x]+a[(x+1)%10])/3;
	}
}
void ARRAY::print()
{
	for (int x=0;x<10;x++)
	{
		cout<<a[x]<<'\t';
	}
	cout<<'\n';
	for (int x=0;x<10;x++)
	{
		cout<<b[x]<<'\t';
	}
	cout<<'\n'; 
}
int main()
{
	float num[10];
	for (int x=0;x<10;x++)
	{
		cin>>num[x];
	}
	ARRAY n(num);
	n.process();
	n.print();
	return 0;
}
