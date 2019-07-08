#include "datePro.h"
#include "date.h"
#include <iostream>
#include <map>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
struct NameNum
{
	NameNum(const string& s, const Date& d) :name(s), num(d.getAbsDay()) {}
	NameNum(const string& s, int n) :name(s), num(n) {}
	string name;
	int num;
};
void pr302A(istream& cin, ostream& cout)
{
	map<string, int>sd;
	string n, fs;
	for (Date d; cin >> n >> d >> fs;)
	{
		sd[n] = d.getAbsDay() + (fs == "Out" ? 0 : 1 - sd[n]);
	}
	cout << "����:\n";
	for (map<string, int>::const_iterator it = sd.begin(); it != sd.end(); ++it)
	{
		cout << left << setw(10) << it->first << right << setw(5) << it->second << '\n';
	}
}
void pr302B(istream& cin, ostream& cout)
{
	vector<NameNum> nd;
	Date curDay;
	cin >> curDay;
	int n;
	for (string s; cin >> s >> n;)
	{
		nd.push_back(NameNum(s, curDay + n));
	}
	sort(nd.begin(), nd.end());
	cout << "��������:\n";
	for (int i = 0; i < nd.size(); ++i)
	{
		cout << left << setw(11) << nd[i].name << Date(nd[i].num) << '\n';
	}
}
void pr302C(istream& cin, ostream& cout)
{
	vector<NameNum> nd;
	Date curDay, d;
	cin >> curDay;
	for (string s; cin >> s >> d;)
	{
		nd.push_back(NameNum(s, d-curDay));
	}
	sort(nd.begin(), nd.end());
	cout << "ȷ������:\n";
	for (int i = 0; i < nd.size(); ++i)
	{
		cout << nd[i].name << " " << nd[i].num << '\n';
	}
}
void pr302D(istream& cin, ostream& cout)
{
	cout << "���ڼ�:\n";
	for (Date d; cin >> d;)
	{
		cout << d.getWeekDay() << '\n';
	}
}
void pr302E(istream& cin, ostream& cout)
{
	Date a, b, d, mD;
	int n, maxd = 0;
	cin >> a >> b >> n;
	cin.ignore();
	for (string s, t; getline(cin, s); a = d + 1)
	{
		istringstream sin(s);
		sin >> d;
		if (d - a > maxd) maxd = d - a, mD = a;
		sin >> d;
	}
	if (b - a + 1 > maxd)maxd = b - a + 1, mD = a;
	d = mD + (maxd - n) / 2;
	cout << "���Ż���:\n";
	d.print(cout, d.MDYY);
	cout << "\n";
}