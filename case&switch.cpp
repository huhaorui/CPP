#include <iostream>
using namespace std;
//learn switch&case
int main()
{
	int a=2;
	switch(a)
	{
		case 1	:cout<<'1';
		case 2	:cout<<'2';    //请问这段代码会输出什么? 
		case 3	:cout<<'3';	 //在switch语句中，遇到第一个满足条件的语句后，会进入语句块 
		case 4	:cout<<'4';	a=5; break;//在遇到break后，结束switch 
		case 5	:cout<<'5';
		default	:cout<<"no";
	}
	return 0;
}
