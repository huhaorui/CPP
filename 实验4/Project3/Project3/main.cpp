#include <iostream>
#include <iomanip>
using namespace std;
class matrix
{
private:
	float num[2][3];
public:
	matrix();
	void show();
	friend matrix operator +(matrix&, matrix&);
	friend ostream & operator << (ostream&, matrix&);
	friend istream& operator >>(istream&, matrix&);
};
istream& operator >>(istream& input, matrix& c)
{
	for (int x = 0; x < 2; x++)
		for (int y = 0; y < 3; y++)
			input >> c.num[x][y];
	return input;
}
ostream& operator << (ostream& output, matrix& c)
{
	for (int x = 0; x < 2; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			output << setw(6) << c.num[x][y];
		}
		cout << '\n';
	}
	return output;
}
matrix operator +(matrix& a, matrix& b)
{
	matrix c;
	for (int x = 0; x < 2; x++)
		for (int y = 0; y < 3; y++)
			c.num[x][y] = a.num[x][y] + b.num[x][y];
	return c;
}
void matrix::show()
{
	
}
matrix::matrix()
{}
int main()
{
	matrix m1, m2;
	cin >> m1 >> m2;
	matrix m3 = m1 + m2;
	cout << m3;
	return 0;
}