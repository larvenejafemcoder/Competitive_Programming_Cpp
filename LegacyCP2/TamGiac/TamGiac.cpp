#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 100;
const int MAX_SOTAMGIAC = 10000;

int A[MAX_N][2];
float B[MAX_SOTAMGIAC];
int n;

void Input()
{
   	ifstream fin("TamGiac.inp");
    fin >> n;
    for (int i = 0; i < n; i++)
        fin >> A[i][0] >> A[i][1];
    fin.close();
}

float area(int i, int j, int k) {
    return abs((A[i][1] + A[j][1]) * (A[i][0] - A[j][0]) +
               (A[j][1] + A[k][1]) * (A[j][0] - A[k][0]) +
               (A[k][1] + A[i][1]) * (A[k][0] - A[i][0])) / 2.0;
}

void Process() 
{
    int p = 0;
    for (int i = 0; i < n - 2; i++) 
    {
        for (int j = i + 1; j < n - 1; j++) 
        {
            for (int k = j + 1; k < n; k++) 
            {
                float S = area(i, j, k);
                if (S > 0 && area(1, i, j) + area(1, k, i) + area(1, j, k) == S) 
                {
                B[p++] = S;
                }
            }
        }
    }
    sort(B,B+p);
}

void Output()
{
	ofstream out("TamGiac.out");
    for (int i = 0; i < n; i++)
    out << B[i] << " ";
    out << endl;
    out.close();
}

int main()
{
	Input();
	Process();
	Output();
	return 0;
}