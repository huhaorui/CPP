#include <iostream>
using namespace std;
int main()
{
	char s1[100],s2[100];;
	cin>>s2;
	s1[0]=s2[0];
	for (int x=1;s2[x-1]!='\0';x++)
		s1[x]=s2[x];
	cout<<s1;
	return 0;
}
