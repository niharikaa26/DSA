#include<iostream>
using namespace std;
int main(){
  int m,n;
  cout<<"enter rows and columns: "<<endl; 
  cin>>m>>n;
  int arr[m][n];
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      cin>>arr[i][j];
    }
  }
  //solution
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++ ){
      if(i==j){
        cout<<arr[i][j]<<" ";
      }
      else if(j== (n-1-i)){
        cout<<arr[0+i][j];
      }
      else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
}