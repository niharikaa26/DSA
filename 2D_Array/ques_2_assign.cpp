#include<iostream>
using namespace std;
int m,n;
int main(){
  cout<<"enter number of rows and columns:"<<endl;
  cin>>m>>n;
  int arr[m][n];
  int crr[n][m];

  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){

    cin>>arr[i][j];
    }
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
    crr[i][j] = arr[j][i];
    }
  }
  
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
    cout<<crr[i][j]<< " ";    
    }
    cout<< endl;
  }
}