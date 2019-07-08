#include <iostream>
using namespace std;
int main()
{
	int k=0;
	char c='A';
	do
	{
		switch (c++)
		{
			case 'A':k++;cout<<k<<endl;break;
			case 'B':k--;cout<<k<<endl;
			case 'C':k+=2;cout<<k<<endl;break;
			case 'D':k=k%2;cout<<k<<endl;break;
			case 'E':k=k*10;cout<<k<<endl;break;
			default:k=k/3;cout<<k<<endl;
		}
		k++;
		cout<<k<<endl;
	} while(c<'G');
	cout<<"k="<<k;
	return 0;
}
