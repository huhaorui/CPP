#include <iostream>
using namespace std;
bool judge(int num[][100],int n)
{
 for (int x=0;x<n;x++)
 {
  for (int y=0;y<n;y++)
  {
   //cout<<(*(num+x*2+y));
   if (x==y)
   {
    if (*(*(num+x)+y)!=1) return false;
   }
   else
   {
    if (*(*(num+x)+y)!=0) return false;
   }
   //cout<<endl;
  }
 }
 return true;
}
int main()
{
 int num[10][100],n;
 cin>>n;
 for (int x=0;x<n;x++)
  for (int y=0;y<n;y++)
   cin>>(*(*(num+x)+y));
 if (judge(num,n)) cout<<"yes"; else cout<<"no";
 return 0;
}
