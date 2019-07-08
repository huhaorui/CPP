#include <iostream>
using namespace std;
int main()
{
	int num;
	int a,b;
	cin>>num;
	for (int x=0;x<num;x++)
	{
		cin>>a>>b;
		while (max(a,b)%min(a,b)!=0)
		{
			if (a>b) a=a%b; else b=b%a;
		}
		cout<<"Case "<<x+1<<": "<<min(a,b)<<endl;
	}
	return 0;
} 
int max(int a,int b)
{
	if (a>b) return a; else return b;
}
int min(int a,int b)
{
	if (a<b) return a; else return b;
}
