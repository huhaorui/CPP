#include <iostream>
using namespace std;
int main()
{
	int num[20],m;
	for (int x=0;x<10;x++)
		cin>>*(num+x);
	cin>>m;
	for (int x=9;x>=0;x--)
		*(num+x+m)=*(num+x);//���� 
	for (int x=0;x<m;x++)
		*(num+x)=*(num+x+10);//ǰ�� 
	for (int x=0;x<10;x++)
		cout<<*(num+x)<<endl;
	return 0;
}
