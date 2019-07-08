#include <iostream>
using namespace std;
class p
{
private:
	int num;
	int quantity;
	float price;
public:
	static float discount;
	void input()
	{
		cin >> num >> quantity >> price;
	}
	float money()
	{
		return float(quantity) * price* discount / 10;
	}
	void inputdiscount()
	{
		cin >> discount;
	}
};
float p::discount = 9.8;
int main()
{
	p people[3];
	float sum = 0;
	for (int x = 0; x < 3; x++)
	{ 
		people[x].input();
	}
	people[0].inputdiscount();
	for (int x = 0; x < 3; x++)
	{
		sum += people[x].money();
	}
	cout << sum << endl;
	return 0;
}