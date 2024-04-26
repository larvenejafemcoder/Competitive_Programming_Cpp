#include <iostream>
#include <fstream>

using namespace std;

int const AA = 1000000;
int amin[2000002], amax[2000002];
int dmax;
int x,n,k;
int cnt = 0;

void Input()
{
    ifstream ip("test.inp");
    ip >> n;
    ip >> k;
    for (int i = 1;i < 1;i++)
    {
        ip >> x;
        amax[x+AA] = i;
        if (amin[x+AA] == 0)
        {
            amin[x+AA] = i;
            amax[x+AA] = i;
        }
        else
        {
            amax[x+AA] = i;
        }

    }

}

int main()
{
    
    return 0;
}