#include <iostream>
using namespace std;
//learn switch&case
int main()
{
	int a=2;
	switch(a)
	{
		case 1	:cout<<'1';
		case 2	:cout<<'2';    //������δ�������ʲô? 
		case 3	:cout<<'3';	 //��switch����У�������һ���������������󣬻�������� 
		case 4	:cout<<'4';	a=5; break;//������break�󣬽���switch 
		case 5	:cout<<'5';
		default	:cout<<"no";
	}
	return 0;
}
