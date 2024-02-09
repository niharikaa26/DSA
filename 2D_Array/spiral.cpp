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
    for(int k=0; k<(n/2); k++){
      for(int i=0; i<m; i++){
      if(i==0){
         for(int j=k; j<n-k; j++){
        cout<<a[i+k][j]<<" ";
      }
      }
      else if(i>0 && i<(m-1-k)){
        cout<<a[i+k][n-1-k]<<" ";
      }    
      else if(i==(m-1-k)){
        for(int j=(n-k-(n/2)); j>(k-1); j--){
        cout<<a[i][j]<<"...";
      }
    } 

    }
    for (int i = (m-2-k); i > k; i--)
    {
      cout<<a[i][k]<< " ";
    }
    
  }
  
}