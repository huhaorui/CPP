#include <iostream>
#include <string>
using namespace std;
void sort(string name[]) 
{
	int i,j,min;
	string tmp;
	for (i=0;i<5;i++)
	{
		min=i;
		for (j=i;j<5;j++)
		{
			if (name[min]>name[j]) min=j;
		}
		tmp=name[i];
		name[i]=name[min];
		name[min]=tmp;
	}
}
int main()
{
	string name[5];
	for (int x=0;x<5;x++)
		cin>>name[x];
	sort(name);
	for (int x=0;x<5;x++)
		cout<<name[x]<<endl;
	return 0;
}
