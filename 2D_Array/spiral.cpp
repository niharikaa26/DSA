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
    for(int k=0; k<(n/2); k++){
      for(int i=0; i<m; i++){
      if(i==k){
         for(int j=k; j<(n-k); j++){
        cout<<a[i][j]<<" ";
      }
      }
      else if(i>k && i<(m-1-k)){
        cout<<a[i][n-k-1]<<" ";
      }    
      else if(i==(m-1-k)){
        for(int j=(n-1-k); j>=k; j--){
        cout<<a[i][j]<<" ";
      }
    } 

    }
    for (int i = (m-2-k); i > k; i--)
    {
      cout<<a[i][k]<< " ";
    }
    
  }
  
}