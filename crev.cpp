#include <iostream>
using namespace std;
int main()
{
	int num,ans[1000],a,b,small_num;
	cin>>num;
	for(int x=0;x<num;x++)
	{
		cin>>a>>b;
		if (a>b) small_num=a;else small_num=b;
		for (int y=small_num;;y--)
		{
			if (a%y==0&&b%y==0)
			{
				ans[x]=y;
				break;
			}
		}
	}
	for(int x=0;x<num;x++)
	{
		cout<<"Case "<<x<<": "<<ans[x]<<endl;
	}
	return 0;
} 
