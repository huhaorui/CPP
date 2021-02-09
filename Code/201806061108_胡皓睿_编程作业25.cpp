#include <iostream>
using namespace std;
int my_strcmp(char *str1,char *str2)
{
	int x=0;
	do
	{
		if (*(str1+x)=='\0'&&*(str2+x)=='\0') return 0;
		if (*(str1+x)!=*(str2+x)) return (*(str1+x)-*(str2+x));
		x++;
	}
	while (true);
}
int main()
{
	char x1[100],x2[100];
	cin>>x1;
	cin>>x2;
	cout<<my_strcmp(x1,x2);
	return 0;
	
}
