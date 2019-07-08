#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
int main()
{
	ofstream outfile;
	ifstream infile;
	outfile.open("f1.dat", ios::out);
	outfile.close();
	outfile.open("f2.dat", ios::out);
	outfile.close();
	int num[20];
	for (int x = 0; x < 20; x++)
	{
		cin >> num[x];
	}
	outfile.open("f1.dat", ios::out);
	for (int x = 0; x < 10; x++)
	{
		outfile << num[x] << endl;
	}
	outfile.close();
	outfile.open("f2.dat", ios::out);
	for (int x = 10; x < 20; x++)
	{
		outfile << num[x] << endl;
	}
	outfile.close();
	infile.open("f1.dat", ios::in);
	for (int x = 0; x < 10; x++)
	{
		infile >> num[x];
	}
	infile.close();
	outfile.open("f2.dat", ios::app);
	for (int x = 0; x < 10; x++)
	{
		outfile << num[x] << endl;
	}
	outfile.close();
	infile.open("f2.dat", ios::in);
	for (int x = 0; x < 20; x++)
	{
		infile >> num[x];
	}
	infile.close();
	sort(num, num + 20);
	outfile.open("f2.dat", ios::out);
	for (int x = 0; x < 20; x++)
	{
		outfile << num[x] << endl;
	}
	outfile.close();
}