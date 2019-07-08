#include <iostream>
using namespace std;
class Complex
{
private:
	float a, b;
public:
	Complex(float x, float y);
	Complex(void);
	Complex operator +(Complex& c2);
	Complex operator +(int n);
	friend Complex operator +(int n, Complex& c2);
	void show();
};
Complex::Complex(float x, float y)
{
	a = x;
	b = y;
}
Complex::Complex(void)
{
	;
}
Complex Complex::operator +(Complex& c2)
{
	Complex c;
	c.a = a + c2.a;
	c.b = b + c2.b;
	return c;
}
Complex Complex::operator +(int n)
{
	Complex c;
	c.a = a + n;
	c.b = b;
	return c;
}
Complex operator +(int n, Complex& c2)
{
	Complex c;
	c.a = n + c2.a;
	c.b = c2.b;
	return c;
}
void Complex::show()
{
	cout << '(' << a;
	if (b > 0) cout << '+';
	cout << b << "i)\n";
}
int main()
{
	float n[4], a;
	cin >> n[0] >> n[1] >> n[2] >> n[3] >> a;
	Complex c1(n[0], n[1]), c2(n[2], n[3]);
	Complex c3 = c1 + c2, c4 = c1 + a, c5 = a + c1;
	c3.show();
	c4.show();
	c5.show();
	return 0;
}