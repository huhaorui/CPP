#include <iostream>
using namespace std;
int main()
{
	int num[3][3];
	int max[3];
	int max_num;
	for (int x=0;x<3;x++)
		for (int y=0;y<3;y++)
			cin>>*(*(num+x)+y);
	for (int x=0;x<3;x++)
	{
		max_num=*(*(num+x));
		for (int y=0;y<3;y++)
		{
			if (*(*(num+x)+y)>max_num) max_num=*(*(num+x)+y);
		}
		*(max+x)=max_num;
		cout<<*(max+x)<<' ';
	}
	return 0;
}
