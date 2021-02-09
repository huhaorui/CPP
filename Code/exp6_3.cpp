include <iostream>
using namespace std;
void fun(int a[],int *n)
{
	int t=0;
	for (int x=1;x<=100;x++)
	{
		if (((x%7==0)||(x%11==0))&&(x%77!=0))
		{
			a[t]=x;
			t++;
		} 
	}
	*n=t;
}
int main()
{
	int a[100],n;
	fun(a,&n);
	for (int x=0;x<n;x++)
		cout<<a[x]<<' ';
	return 0;
}
