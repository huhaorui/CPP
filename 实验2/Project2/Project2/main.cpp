#include <iostream>
using namespace std;
class cube
{
private:
	int length;
	int width;
	int height;
public:
	int space()
	{
		return length * width* height;
	}
	cube()
	{
		cin >> length >> width >> height;
	}
};
int main()
{
	cube c[3];
	for (int x = 0; x < 3; x++)
	{
		cout << c[x].space() << endl;
	}
	return 0;
}