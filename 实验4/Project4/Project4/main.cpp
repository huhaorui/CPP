#include <iostream>
using namespace std;
class Complex
{
public:
	Complex()
	{
		real = 0;
		image = 0;
	}
	Complex(double r, double i)
	{
		real = r;
		image = i;
	}
	operator double()
	{
		return real;
	}
public:
	double real, image;
};
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	Complex c1(a, b), c2(c, d), c3;
	double dl;
	dl = 2.5 + c1;
	cout << dl << endl;
	return 0;
}