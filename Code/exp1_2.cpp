#include <iostream>
using namespace std;
int main()
{
	int a,b,swap;
	cout << "Please enter two integers:";
	cin >> a >> b;
//	swap = a;
//	a = b;
//	b = swap;  
	a = a + b;
	b = a - b;
	a = a - b; //change without swap 
	cout << "These two integers has been exchanged,A is " << a << ",B is " << b << "." << endl; 
}
