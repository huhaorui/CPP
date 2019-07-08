#include "Point.cpp"
class Circle :public Point
{
public:
	Circle(float a = 0, float b = 0, float r = 0);
	void setRadius(float);
	float getRaduis() const;
	float area() const;
	friend ostream& operator<<(ostream&, const Circle&);
protected:
	float radius;
};

