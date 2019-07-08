#include <iostream>
using namespace std;
int main()
{
	int m;
	while (cin>>m&&m!=0)
	{
		string s[100];
		int num[10],total=0;
		for (int x=0;x<m;x++)
		{
			cin>>s[x];
		}
		for (int x=0;x<m;x++)
		{
			for (int y=0;y<10;y++)
			{
				num[y]=0;
			}
			for (int y=0;y<s[x].length();y++)
			{
				num[s[x][y]-'0']++;
			}
			for (int y=0;y<10;y++)
			{
				if (num[y]>=2)
				{
					total++;
					if (num[y]==4)
					{
						total++;
					}
				}
			}
		}
		cout<<total<<endl;
	}
}
