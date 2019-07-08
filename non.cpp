#include<iostream>
using namespace std;
int fuc_1(int a[],int b[],int n);
void fuc_2(int b[],int k);
int main()
{
	int n,i,j,k;
	cin>>n;
	int a[n];
	int b[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	fuc_1(a,b,n);
	k=fuc_1(a,b,n);
	for(int x=0;x<k;x++) cout<<b[x]<<' '; 
	cout<<endl;
	fuc_2(b,k);
	for(j=0;j<k;j++)
	{
		cout<<b[j]<<' ';
	}
	cout<<endl;
	return 0;
}
int fuc_1(int a[],int b[],int n)
{
	int i,j,k=0;
	int flag=0;
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0&&a[i]!=1)
		{
			b[k]=a[i];
				k++;
		}
	}
	return k;
}
void fuc_2(int b[],int k )
{
	int i,j,hold;
	for(i=0;i<k;i++)
	{
		for(j=0;j<k-1-i;j++)
		{
			if(b[j]>b[j+1])
			{
				hold=b[j];
				b[j]=b[j+1];
				b[j+1]=hold;
		}	
		}
	}
}

