#include <iostream>
using namespace std;
int main()
{
	int y,m;
	cout<<"Please enter the year and month"<<endl;
	cin>>y>>m;
	cout<<y<<'-'<<m<<':';
	switch ((y%400==0)||((y%4==0)&&(y%100!=0)))
	{
	case true:
		switch (m)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:cout<<31;break;
			case 2:cout<<29;break;
			case 4:
			case 6:
			case 9:
			case 11:cout<<30;break;
		}
		break;
		case false:
		switch (m)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:cout<<31;break;
			case 2:cout<<28;break;
			case 4:
			case 6:
			case 9:
			case 11:cout<<30;break;
		}
	}
}
