#include <iostream>
using namespace std;
int main()
{
	for (int x = 0; x < 8; x++)
	{
		for (int y = 0; y < 7 - x; y++)
		{
			cout << ' ';
		}
		for (int y = 0; y < 2 * x + 1; y++)
		{
			cout << 'B';
		}
		cout << endl;
	}
}