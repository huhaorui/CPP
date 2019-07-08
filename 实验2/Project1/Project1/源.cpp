#include <iostream>
#include "arraymax.h"
using namespace std;
int main()
{
	int num[10];
	for (int x = 0; x < 10; x++)
	{
		cin >> num[x];
	}
	arraymax arr(num);
	cout << arr.getmax();
	return 0;
}