//12345565746345662342354364562432543634+438154782154783258368964381265832689=£¿ 
#include <iostream>
using namespace std;
int main()
{
	string a, b;
	int numa[100], numb[100], sum[100];
	cin >> a >> b;
	for (int x = 0; x < 100; x++)
	{
		numa[x] = 0;
		numb[x] = 0;
		sum[x] = 0;
	}
	for (int x = 0; x < a.length(); x++)
	{
		numa[a.length() - x - 1] = a[x] - 48;
	}
	for (int x = 0; x < b.length(); x++)
	{
		numb[b.length() - x - 1] = b[x] - 48;
	}
	bool flag = false;
	for (int x = 50; x >= 0; x--)
	{
		if (sum[x] > 0) flag = true;
		if (flag) cout << "x:" << x << " sum=" << sum[x] << endl;
	}
	for (int x = 0; x < 100; x++)
	{
		sum[x] += a[x] + b[x];
		if (sum[x] >= 10)
		{
			sum[x + 1] += sum[x] / 10;
			sum[x] %= 10;
		}
	}
	/*
		for (int x=50;x>=0;x--)
		{
			if (sum[x]>0) flag=true;
			if (flag) cout<<"x:"<<x<<" sum="<<sum[x]<<endl;
		}
		*/
	return 0;
}