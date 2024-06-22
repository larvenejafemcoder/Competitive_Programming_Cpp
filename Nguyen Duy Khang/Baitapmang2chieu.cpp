#include <iostream>

using namespace std;

int main()
{
  int m,n;
  int a[100][100];
  cout << "Input the row and column length of your array" << endl;
  cin >> m >> n;
  cout<<"Input the array"<<endl;
  for(int i=1; i<=m; i++)
  {
    for(int j=1; j<=n; j++)
    {
      cin >> a[i][j];
    }
  }

  for(int i=1; i<=m; i++)
  {
    for(int j=1; j<=m; j++)
    {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
