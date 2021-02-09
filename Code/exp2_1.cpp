#include <iostream>
using namespace std;
int main()
{
	int num;
	while ((cin>>num)&&(num>=0))
	{
		if (num%2==0) cout<<"even"<<endl ; 
		else cout<<"odd"<<endl;
	}
	cout<<"The end";
	return 0;
}
