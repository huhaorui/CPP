#include <iostream>
using namespace std;
class Point
{
public:
	Point(float a = 0, float b = 0);
	void setPoint(float, float);
	float getX() const
	{
		return x;
	}
	float getY() const
	{
		return y;
	}
	friend ostream& operator <<(ostream&, const Point&);
protected:
	float x, y;
};
Point::Point(float a, float b)
{
	x = a;
	y = b;
}
void Point::setPoint(float a, float b)
{
	x = a;
	y = b;
}
ostream& operator <<(ostream& output, const Point& p)
{
	output << "[" << p.x << "," << p.y << "]\n";
	return output;
}
int main()
{
	Point p1(2,3);
	cout<<p1;
}
