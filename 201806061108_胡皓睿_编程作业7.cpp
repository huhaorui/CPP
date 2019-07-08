#include <iostream>
using namespace std;
int main()
{
	int a, b;
	bool flag = false;
	cout<<"Please enter begin and end"<<endl;
	cin >> a >> b;
	flag = false;
	for (int n = a; n <= b; n++)
	{
		int c, d, e;
		c = n / 100;
		d = (n % 100) / 10;
		e = n % 10;
		if (c * c * c + d * d * d + e * e * e == n)
		{
			if (flag) cout << " ";
    		cout << n;
			flag = true;
    	}
	}
		if (!(flag))
			cout << "no";
		cout << endl;
	return 0;
}