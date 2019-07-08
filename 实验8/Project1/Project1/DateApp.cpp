#include "datePro.h"
#include "myExcept.h"
#include <conio.h>
#include <fstream>
#include <iostream>
using namespace std;
typedef void(*PF)(istream& cin, ostream& cout);
const char* iFile[] = { "A32.txt","B32.txt","C32.txt","D32.txt","E32.txt" };
const char* oFile[] = { "A32.out","B32.out","C32.out","D32.out","E32.out" };
PF func[] = { pr302A,pr302B,pr302C,pr302D,pr302E };
int main()
{
	for (int choice = 1; choice;)
	{
		system("cls");
		if (choice > 5) cout << "ERROR\n\n";
		cout << "Õâ¶ÑÊÇ²Ëµ¥\n";
		cin >> choice;
		if (choice >= 1 && choice <= 5)
		{
			ifstream cin(iFile[choice - 1]);
			ofstream cout(oFile[choice - 1]);
			try
			{
				func[choice - 1](cin, cout);
			}
			catch (myExcept& e)
			{
				cerr << e.getWhat() << '\n';
			}
			cerr << "Press any key...";
			system("pause");
		}
	}
}