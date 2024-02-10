#include <iostream>
using namespace std;
int main()
{
  int m,n;
  cout << "enter dimensions: " << endl;
  cin >> m >> n;
  int a[m][n];
  cout << "enter elements of matrix: ";
  for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
      {
        cin >> a[i][j];
      }
    }

    //logic
    for(int i=0; i<m; i++){
      if(i%2 == 0){
        for(int j=0; j<n; j++){
          cout<<a[i][j]<<" ";

        }
      }
      else if(i%2 != 0){
        for(int j=(n-1); j>(-1); j--){
          cout<<a[i][j]<<" ";

        }
      }

    }
}