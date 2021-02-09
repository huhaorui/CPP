#include <iostream>
using namespace std;
int main()
{
	int n;
	int pencil[2][1],price[2],price_low;
	cin>>n;
	n=n-1;
	
	cin>>pencil[0][0]>>pencil[0][1]>>pencil[1][0]>>pencil[1][1]>>pencil[2][0]>>pencil[2][1];
	price[0]=(n/(pencil[0][0])+1)*(pencil[0][1]);
	price[1]=(n/(pencil[1][0])+1)*(pencil[1][1]);
	price[2]=(n/(pencil[2][0])+1)*(pencil[2][1]);
	if ((price[0]<=price[1])&&(price[0]<=price[2])) price_low=price[0];
	if ((price[1]<=price[0])&&(price[1]<=price[2])) price_low=price[1];
	if ((price[2]<=price[0])&&(price[2]<=price[1])) price_low=price[2];
	cout<<price_low;
}
