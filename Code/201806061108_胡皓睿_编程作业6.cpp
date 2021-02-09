#include <iostream>
	using namespace std;
int main()
{
	int n;
	int count = 0;
	cout << "Please enter ten numbers" << endl;
	for (int k = 0; k < 10; k++)
	{
		cin >> n;
		if (n % 3 == 0)
			count = count + 1;
	}
	cout << count << " of the numbers can divided by 3." << endl;
	return 0;
}
