#include <iostream>
using namespace std;
int main()
{
  int m, n, p, q;
  cout << "enter dimensions: " << endl;
  cin >> m >> n;
  cout << "second matrix dimensions: " << endl;
  cin >> p >> q;
  if (n == p)
  {
    int res[m][q];
    int a[m][n];
    cout << "enter elements of 1st matrix: ";
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> a[i][j];
      }
    }
    int b[p][q];
    cout << "enter elements of 2nd matrix: ";
    for (int i = 0; i < p; i++)
    {
      for (int j = 0; j < q; j++)
      {
        cin >> b[i][j];
      }
      
      for (int i=0; i<m; i++){
        for(int j=0; j<q; j++){
          res[i][j] = 0;
          
          for(int k=0; k<p; k++){
            res[i][j] += a[i][k] * b[k][j]; 
          }
        }
      }
    }
    cout << "resultant matrix: ";
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < q; j++)
      {
        cout<< res[i][j]<<" ";
      }
      cout<<endl;
    }
  }
  else
  {
    cout << "cant be multiplied" << endl;
  }
}