#include "datePro.h"
#include "myExcept.h"
#include "date.h"
#include <stdlib.h>
#include <fstream>
#include <iostream>
using namespace std;
typedef void (*PE)(istream& cin, ostream& cout);
const char* iFile[] = { "A32.txt","B32.txt","C32.txt","D32.txt","E32.txt" };
const char* oFile[] = { "A32.out","B32.out","C32.out","D32.out","E32.out" };
PE func[] = { pr302A,pr302B,pr302C,pr302D,pr302E };
int main()
{
	for (int choice = 1; choice;)
	{
		system("cls");
		if (choice > 5)cout << "You may entered a wrong key, try again.\n\n";
		cout << "1-----统计天数\n";
		cout << "2-----推断日期\n";
		cout << "3-----确定天数\n";
		cout << "4-----星期几\n";
		cout << "5-----安排会议\n";
		cout << "6-----退出系统\n";
		cout << "Enter your choice:";
		cin >> choice;
		if (choice >= 1 && choice <= 5)
		{
			ifstream cin(iFile[choice - 1]);
			ofstream cout(oFile[choice - 1]);
			try
			{
				func[choice - 1](cin, cout);
			}
			catch (MyExcept& e)
			{
				cerr << e.getWhat() << "\n";
			}
			cerr << "press any key...";
			getchar();
		}
	}
}
