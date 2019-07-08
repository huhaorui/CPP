#include <iostream>
#include <cstring>
#define n 5
using namespace std;
struct s
{
	char id[10];
	int score;
};
int fun(s a[],s *b)
{
	int k=0;
	for (int x=0;x<n;x++)
	{
		if (a[x].score>=60&&a[x].score<=69)
		{
			(b+k)->score=a[k].score;
			strcpy((b+k)->id,a[k].id);
			k++;
		}
	}
	return k;
}
int main()
{
	s a[n],b[n];
	for (int x=0;x<n;x++)
	{
		cin>>a[x].id;
		cin>>a[x].score;
	}
	cout<<fun(a,b);
	return 0;
}
