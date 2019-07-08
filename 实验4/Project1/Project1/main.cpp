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
	Complex operator -(Complex& c2);
	Complex operator *(Complex& c2);
	Complex operator /(Complex& c2);
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
Complex Complex::operator -(Complex& c2)
{
	Complex c;
	c.a = a - c2.a;
	c.b = b - c2.b;
	return c;
}
Complex Complex::operator *(Complex& c2)
{
	Complex c;
	c.a = a * c2.a - b * c2.b;
	c.b = b * c2.a + a * c2.b;
	return c;
}
Complex Complex::operator /(Complex& c2)
{
	Complex c;
	c.a = (a * c2.a + b * c2.b) / (b * b + c2.b * c2.b);
	c.b = (b * c2.a - a * c2.b) / (b * b + c2.b * c2.b);
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
	float n[4];
	cin >> n[0] >> n[1] >> n[2] >> n[3];
	Complex a(n[0], n[1]), b(n[2], n[3]);
	Complex c = a + b, d = a - b, e = a * b, f = a / b;
	c.show();
	d.show();
	e.show();
	f.show();
	return 0;
}