#include <iostream>
using namespace std;
struct stu
{
	char id[5];
	char name[20];
	float score;
};
int main()
{
	float total=0;
	int max=0;
	struct stu student[5];
	for (int x=0;x<5;x++)
	{
		cin>>student[x].id;
		cin>>student[x].name;
		cin>>student[x].score;
		total+=student[x].score;
		if (student[x].score>student[max].score)
			max=x;
	}
	cout<<student[max].id<<' '<<student[max].name<<' '<<student[max].score<<' '<<total/5;
	return 0; 
}
