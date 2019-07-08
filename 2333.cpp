#include <bits/stdc++.h>
using namespace std;
int max(int x,int y)
{
    return x>y?x:y;
}
int main()
{
    int n,num[100][100];
    char c[100];
    while (cin>>n)
    {
        for (int x=0;x<n;x++)
        {
            cin>>c;
            for (int y=n-x-1;y<=n+x-1;y++)
            {
                num[x][y]=c[y-n+x+1]-'0';
                //cout<<'('<<x<<','<<y<<")\n";
            }
        }
        for (int x=n-2;x>=0;x--)
        {
            for (int y=n-x-1;y<=n+x-1;y++)
            {
                num[x][y]+=max(num[x+1][y-1],max(num[x+1][y],num[x+1][y+1]));
                //cout<<'('<<x<<','<<y<<")\n";
            }
        }
        cout<<num[0][n-1]<<endl;
    }
}
