#include <iostream>
#include <fstream>

using namespace std;
int a[100000],n,x,y;

void Input()
{
	ifstream ip("TamGiac.inp");
	ip>>x>>y;
	ip.close();
}

void StamGiac(int j, int i, int k)
{

}

void Abso()
{

}

void Process()
{
	for(int i=1; i<=n-2; i++)
	{
		for(int j=i+1; i<=n-1; j++)
		{
			for(int k=k+j; k<=n; k++)
			{
				if(StamGiac(i,j,k)>0)
				{
					if(StamGiac(i,j,k) == StamGiac(1,j,k)+StamGiac(1,j,i)+StamGiac(1,i,k))
					{

					}
				}
			}
		}
	}
}

void Output()
{
	
}

int main()
{
	
}