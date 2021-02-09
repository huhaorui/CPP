#include <iostream>
using namespace std;
int main()
{
	int x;
	float y;
	cin>>x;
	if (x<=150)
	y=0.4463*x;
	else if (x<=400)
	y=0.4463*150+0.4663*(x-150);
	else
	y=0.4463*150+0.4663*250+0.5663*(x-400);
	y=int((y*10)+0.5)/10.0;
	cout<<y;
	return 0;
}
