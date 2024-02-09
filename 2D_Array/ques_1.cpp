#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter number of students:";
  cin>>n;
  int arr[n][2];
  for(int i=0; i<n; i++){
    for(int j=0; j<2 ; j++){
      if(j==0){
        cout<<"enter roll number:";
        cin>>arr[i][j];
      }

      if(j==1){
        cout<<"enter marks:";
        cin>>arr[i][j];
      }
      
    }
  }
  //print
  for(int i=0; i<n; i++){
    for(int j=0; j<2 ; j++){
      cout<<arr[i][j]<<" ";

    }
    cout<<endl;
  }
  
}