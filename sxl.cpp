#include<iostream>
using namespace std;
void func1(char str[],int n)
{
	for(int i=0;str[i]!='\0';i++)
	{
		int flag=0;
		for(int j=2;j<str[i];j++)
		{			
			if(str[i]%j==0)
			flag=1;
		}
		if(flag==1)
		str[i]=0;
	}
}
void func2(char str[],int n)
{
	int i,j,k,t;
	for(i=0;i<n&&str[i]!='\0';i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(str[j]<str[k])
			k=j;
		}
		t=str[k];
		str[k]=str[i];
		str[i]=t;
	}
}
int main()
{
	char str[100];
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>str[i];
	func1(str,n);
	func2(str,n);
	for(i=0;i<n;i++)
	{
		
		cout<<str[i];
	}
} 
