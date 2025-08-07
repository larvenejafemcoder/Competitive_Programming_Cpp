#include <iostream>
#include <fstream>

using namespace std;

int const AA = 1000000;
int amin[2*AA+1], amax[2*AA+1]; // 2*10**6 + 1 với 2*10**6 + 1 là số phần tử có thể có trong array
int x,n,k;
int cnt = 0;

void Input()
{
    ifstream ip("test.inp");
    ip >> n;
    ip >> k;
    for (int i = 1;i <= n;i++)
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
        if(x+AA+k<AA*2+1 && x+AA-k > 0)
        {
            if (amax[AA + x + k] > 0) 
            {
                cnt = max(cnt, amax[AA + x + k] - amin[AA + x]);
            }
            if (amin[AA + x - k] > 0) 
            {
                cnt = max(cnt, amax[AA + x] - amin[AA + x - k]);
            }
    
        }

    }

}

void Output() {
    ofstream op("test.oup");
    op << cnt;
    op.close();
}

int main()
{
    Input();
    Output();
    return 0;
}