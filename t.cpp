#include <iostream>
using namespace std;
int main()
{
    for (int x=0;x<=25;x++)
    {
        for (int y=0;y<=66;y++)
        {
            int z=(200-8*x-3*y)*4;
            if (x+y+z==100)
            {
                cout<<x<<" "<<y<<' '<<z<<endl;
            }
        }
    }
    return 0;
}
