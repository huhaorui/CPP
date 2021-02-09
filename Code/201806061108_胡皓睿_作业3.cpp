#include <iostream>
using namespace std;
int main()
{
	int m,l,stdm;
	cout<<"Enter the weight:";
	cin>>m;
	cout<<"Enter the length:";
	cin>>l;
	stdm=l-110;
	if (m-stdm>=5) cout<<"Overweight";
	else if (m-stdm>=-5) cout<<"Standard";
	else cout<<"too thin";
	return 0;
}
