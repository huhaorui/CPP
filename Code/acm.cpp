#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int t,n,k,l[1000],sum,min1,min2,tmp;
	bool m[1000];
	cin>>t;
	
	while (t--)
	{
		cin>>n;
		sum=0;
		for (int x=0;x<n-1;x++)
		{
			memset(m,0,sizeof(m));
			cin>>k;
			min1=0;
			min2=0;
			for (int y=0;y<k;y++)
			{
				cin>>l[y];
			}
			min1=l[0];
			tmp=0;
			for (int y=1;y<k;y++)
			{
				if (l[y]<min1) 
				{
					min1=l[y];
					tmp=y;
				}
			}
			m[tmp]=true;
			if (tmp==0) min2=l[1]; else min2=l[0];
			for (int y=1;y<k;y++)
			{
				if (l[y]<min2&&!m[y]) 
				{
					min2=l[y];
				}
			}
			//cout<<min1<<' '<<min2<<endl;
			sum=sum+min1+min2;
		}
		cout<<sum<<endl;
	}
	return 0;
} 
