#include <iostream>
using namespace std;
class Teacher
{
public:
	Teacher()
	{
		cin >> num >> name >> sex;
	}
	void show()
	{
		cout << num << '\n';
		cout << name << '\n';
		cout << sex << '\n';
	}
private:
	int num;
	string name;
	char sex;
};
class BirthDate
{
public:
	BirthDate()
	{
		cin >> year >> month >> day;
	}
	void show()
	{
		cout << year << '\n';
		cout << month << '\n';
		cout << day << '\n';
	}
private:
	int year;
	int month;
	int day;
};
class Professor :public Teacher
{
public:
	void show()
	{
		Teacher::show();
		birthday.show();
	}
private:
	BirthDate birthday;
};
int main()
{
	Professor prof1;
	prof1.show();
}