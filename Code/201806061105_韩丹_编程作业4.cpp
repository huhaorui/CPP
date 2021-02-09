#include <iostream> 
using namespace std;
int main()
{
	int year,month,rn;
	cin>>year>>month;
	cout<<year<<'-'<<month<<':'; 
	if (((year%4==0)&&(year%100!=0)) || (year%400==0))
	rn=1;
	else
	rn=0;
	switch(rn){
		case 1:
			switch(month){
				case 1:cout<<"31";break;
				case 2:cout<<"29";break;
				case 3:cout<<"31";break;
				case 4:cout<<"30";break;
				case 5:cout<<"31";break;
				case 6:cout<<"30";break;
				case 7:cout<<"31";break;
				case 8:cout<<"31";break;
				case 9:cout<<"30";break;
				case 10:cout<<"31";break;
				case 11:cout<<"30";break;
				case 12:cout<<"31";break;
			}
			break;
		case 0:
			switch(month){
				case 1:cout<<"31";break;
				case 2:cout<<"28";break;
				case 3:cout<<"31";break;
				case 4:cout<<"30";break;
				case 5:cout<<"31";break;
				case 6:cout<<"30";break;
				case 7:cout<<"31";break;
				case 8:cout<<"31";break;
				case 9:cout<<"30";break;
				case 10:cout<<"31";break;
				case 11:cout<<"30";break;
				case 12:cout<<"31";break;
			}
			break;
	}
	return 0;
	
} 



