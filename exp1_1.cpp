#include <iostream>
using namespace std;
int main()
{
	int score;
	string level;
	bool correct;
	correct = true;
	cout<<"Please enter the score:";
	cin >> score;
	if ((score >= 100) || (score <= 0))
	{
		level = "Your input is incorrect";
		correct=false;
	}
		else if (score >= 90) level = "A";
		else if (score >= 80) level = "B";
		else if (score >= 70) level = "C";
		else if (score >= 60) level = "D";
		else level = "E";
	if (correct)
	{
		cout << "Your level is:";
	}
	cout << level << endl;
	return 0;
} 
