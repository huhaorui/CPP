#include <iostream>
using namespace std;
struct clock
{
	int hour;
	int minute;
	int second;
};
int main()
{
	clock *t=new clock[2];
	for (int x=0;x<2;x++)
	{
		cin>>(t+x)->hour;
		cin>>(t+x)->minute;
		cin>>(t+x)->second;
		(t+x)->second++;
		if ((t+x)->second>=60)
		{
			(t+x)->second-=60;
			(t+x)->minute++;
		}
		if ((t+x)->minute=60)
		{
			(t+x)->minute-=60;
			(t+x)->hour++;
		}
	}
	for (int x=0;x<2;x++)
	{
		cout<<(t+x)->hour<<"h "<<(t+x)->minute<<"m "<<(t+x)->second<<"s \n";
	}
	return 0;
}
