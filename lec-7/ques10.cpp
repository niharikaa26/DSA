#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter:"<<endl;
  cin>>n;
  int x =1;
  for(int i= n; i>=1; i--){
    for(int j=1; j<=n; j++){
      if(j>= i){
        cout<<"*"; 
      }
      else{
        cout<<" ";
      }
      
    }
    cout<<endl;
  }
}