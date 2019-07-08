#include <iostream>
using namespace std;
int main()
{
	int year,month,day,y=1999,m=1,d=1;
	while(cin>>year>>month>>day)
	{
		int s=0,i;
		if(year>=y)
		{
			for(i=y;i<year;i++)
			  if(i%4==0&&i%100!=0||i%400==0)s+=366;
			  else s+=365;
			for(i=m;i<month;i++)
			{
				switch(i)
				{
					case 1:case 3:case 5:case 7:case 8:case 10:case 12:
					s+=31;break;
					case 2:
						if(i%4==0&&i%100!=0||i%400==0)s+=29;
						else s+=28;
						break;
					default:s+=30;
				}
			}
			for(i=d;i<day;i++)s++;
			cout<<(s+6)/7<<endl;
		}
		else
		{
			for(i=year;i<y;i++)
			  if(i%4==0&&i%100!=0||i%400==0)s+=366;
			  else s+=365;
			for(i=m;i<month;i++)
			{
				switch(i)
				{
					case 1:case 3:case 5:case 7:case 8:case 10:case 12:
					s-=31;break;
					case 2:
						if(i%4==0&&i%100!=0||i%400==0)s-=29;
						else s-=28;
						break;
					default:s-=30;
				}
			}
			for(i=d;i<day;i++)s--;
			cout<<(s+6)/7<<endl;
		}
	}
	return 0;
 }
