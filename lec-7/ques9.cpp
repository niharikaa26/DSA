#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter:"<<endl;
  cin>>n;
  int x =1;
  for(int i= 1; i<=n; i++){
    for(int j=1; j<=i; j++){
     
      if((j-i)%2==0){
        cout<<"1";
      }
      else if((j-i)%2!=0){
        cout<<"0";
      }

      
      
    }
    cout<<endl;
  }
}