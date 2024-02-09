#include<iostream>
using namespace std;
int main(){
  int n;
  int x;

  cout<<"enter:"<<endl;
  cin>>n;
  for(int i =1; i<=n; i++){
    x=1;
    for(int j = 1; j<=i; j++){
      cout<<x;
      x += 2;
    }
    cout<<endl;
    
  }

}