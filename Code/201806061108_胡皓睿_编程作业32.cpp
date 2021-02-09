#include <iostream>
#include <cstring>
#define n 5
using namespace std;
struct s
{
	char id[10];
	int score;
};
int fun(s a[],s b[],int *num)
{
	int k=0,sum=0;
	for (int x=0;x<n;x++)
	{
		sum+=a[x].score;
	}
	float aver=(float)sum/n;
	for (int x=0;x<n;x++)
	{
		if (a[x].score>=aver)
		{
			b[k].score=a[k].score;
			strcpy(b[k].id,a[k].id);
			k++;
		}
	}
	return aver;
	*num=k;
}
int main()
{
	s a[n],b[n];
	int num;
	int *pnum=&num;
	for (int x=0;x<n;x++)
	{
		cin>>a[x].id;
		cin>>a[x].score;
	}
	cout<<fun(a,b,pnum);
	return 0;
}
