#include "Cylinder.h"
Cylinder::Cylinder(float a, float b, float r, float h) :Circle(a, b, r), height(h){}
void Cylinder::setHeight(float h)
{
	height = h;
}
float Cylinder::getHeight() const
{
	return height;
}
float Cylinder::area() const
{
	float sum = 0;
	sum += 2 * 3.14159 * radius * radius;
	sum += height * radius * 2 * 3.14159;
	return sum;
}
float Cylinder::volume() const
{
	return Circle::area()* height;
}
ostream& operator<<(ostream& output, const Cylinder& cy)
{
	output << "Center=[" << cy.x << "," << cy.y << "],r=" << cy.radius << ",h=" << cy.height << "\narea=" << cy.area() << ",volume=" << cy.volume() << endl;
	return output;
}