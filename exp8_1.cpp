#include <iostream>
#include <cstring>
using namespace std;
struct student
{
	char name[20];
	char id[20];
	float score;
};
void change(student *a,student *b)
{
	student tmp;
	tmp=*a;
	*a=*b;
	*b=tmp; 
	/*strcpy(tmp.id,a->id);
	strcpy(a->id,b->id);
	strcpy(b->id,tmp.id);
	strcpy(tmp.name,a->name);
	strcpy(a->name,b->name);
	strcpy(b->name,tmp.name);
	tmp.score=a->score;
	a->score=b->score;
	b->score=tmp.score;*/ 
}
int main()
{
	student *p=new student[3];
	
	for (int x=0;x<3;x++)
	{
		cin>>(p+x)->name;
		cin>>(p+x)->id;
		cin>>(p+x)->score;
	}
	//ÊÖÐ´Ã°ÅÝÅÅÐò 
	if (strcmp((p+0)->id,(p+1)->id)<0) 
		change(p+0,p+1);
	if (strcmp((p+1)->id,(p+2)->id)<0) 
		change(p+1,p+2);
	if (strcmp((p+0)->id,(p+1)->id)<0) 
		change(p+0,p+1);
	for (int x=0;x<3;x++)
		cout<<(*(p+x)).score<<endl;
	return 0;
}
