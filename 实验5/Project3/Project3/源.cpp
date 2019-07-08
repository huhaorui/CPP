#include <iostream>
using namespace std;
class Teacher
{
protected:
	string name;
	int age;
	bool sex;
	string addr;
	string tel;
	string title;
public:
	void display();
};
class Cadre
{
protected:
	string name;
	int age;
	char sex;
	string addr;
	string tel;
	string post;
};
class Teacher_Cadre :public Teacher, public Cadre
{
private:
	int wages;
public:
	void show();
	void set();
};
void Teacher::display()
{
	cout << name << endl;
	cout << age << endl;
	cout << sex << endl;
	cout << addr << endl;
	cout << tel << endl;
	cout << title << endl;
}
void Teacher_Cadre::show()
{
	Teacher::display();
	cout << Cadre::post << endl;
	cout << wages << endl;
}
void Teacher_Cadre::set()
{
	cin >> Teacher::name;
	cin >> Teacher::age;
	cin >> Teacher::sex;
	cin >> Teacher::addr;
	cin >> Teacher::tel;
	cin >> Teacher::title;
	cin >> Cadre::post;
	cin >> wages;
}
int main()
{
	Teacher_Cadre a;
	a.set();
	a.display();
}