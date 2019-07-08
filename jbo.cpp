#include<iostream>
using namespace std;
void CP( char str1[] , char str2[] , int n )
{
	for( int i =0 ; i < n ; i++ )
	{
		str2[i] = str1[i];
	}
	str2[n] = '\0';
}
int main()
{
	char str_1[100], str_2[100];
	int n;
	cout << " 请输入一个字符数组:" <<endl;
	cin >> str_1 ;
	cout << " 请输入n的值:"<<endl;
	cin >> n ;
	CP ( str_1 , str_2  , n ) ;
	cout << str_2;
	return 0;
}

