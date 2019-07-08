#include "Circle.cpp"
class Cylinder:public Circle
{
public:
	Cylinder(float x = 0, float y = 0, float r = 0, float h = 0);
	void setHeight(float h);
	float getHeight() const;
	float area() const;
	float volume() const;
	friend ostream& operator<<(ostream&, const Cylinder&);
protected:
	float height;
};

