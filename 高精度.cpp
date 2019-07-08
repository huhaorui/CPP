#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	long a[50],b[50],c[110];
	string sa,sb,fh;
	bool flag;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	cin>>sa;
	cin>>sb;
	if ((sa[0]=='-') ^ (sb[0]=='-')) fh="-" ; else fh=""; 
	if (sa[0]=='-') sa=sa.substr(1);
	if (sb[0]=='-') sb=sb.substr(1);
	for (int t=0;t<sa.length();t++)
	{
		a[sa.length()-t-1]=sa[t]-48;
	}
	for (int t=0;t<sb.length();t++)
	{
		b[sb.length()-t-1]=sb[t]-48;
	}
	for (int x=0;x<sa.length();x++)
		for (int y=0;y<sb.length();y++)
		{
			c[x+y]=c[x+y]+a[x]*b[y];
			for (int t=0;t<100;t++)
			{
				if (c[t]>10)
				{
					c[t+1]=c[t+1]+c[t]/10;
					c[t]=c[t]%10;
				}
			}			
		}
	flag=false;
	for (int t=0;t<100;t++)
	{
		if (c[t]>10)
		{
			c[t+1]=c[t+1]+c[t]%10;
			c[t]=c[t]/10;
		}
	}
	cout<<fh;
	for (int t=100;t>=0;t--)
	{
		if (c[t]!=0) flag=true;
		if (flag) cout<<c[t];
	}
	return 0; 
 } 
