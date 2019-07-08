#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double num[1000];
	int k = 0;
	while (cin >> num[k])
	{
		k++;
	}
	for (int x = 0; x < k; x++)
	{
		cout.width(15);
		cout.precision(3);
		cout.setf(ios::fixed);
		cout << num[x] << endl;
	}
	return 0;
}