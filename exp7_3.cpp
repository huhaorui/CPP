#include <iostream>
#include <cstring>
using namespace std;
bool isnum(char a)
{
	if ((a>='0')&&(a<='9')) return true; else return false;
}
int main()
{
	char a[100];
	int len;
	cin>>a;
	len=strlen(a);
	for (int x=0;x<len;x++)
	{
		if (isnum(*(a+x))) 
		{
			for (int y=x;y<len;y++)
			{
				*(a+y)=*(a+y+1);
			}
			x--;
		}
	}
	cout<<a;
	return 0;
}
