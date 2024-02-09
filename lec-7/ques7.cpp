#include<iostream>
using namespace std;
int main(){
  int n;
  int x=0;
  cout<<"enter:"<<endl;
  cin>>n;
  for(int i= n; i>=1; i--){
    x++;
    for(int j=1; j<= n; j++){
      if(j==i || j==x){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    cout<<endl;
  }

}