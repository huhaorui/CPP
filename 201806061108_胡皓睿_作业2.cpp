#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float c,f;
	cout<<"Please enter the Fahrenheit temperature:";
	cin>>f;
	c=5*(f-32)/9;
	cout<<"The Celsius temperature is:"<<setprecision(1)<<setiosflags(ios::fixed)<<c;
} 
