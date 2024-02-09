#include<iostream>
using namespace std;
int main(){
  int n;
  int x;

  cout<<"enter:"<<endl;
  cin>>n;
  for(int i =1; i<=n; i++){
    x=65;
    for(int j = 1; j<=n; j++){
      cout<<char(x);
      x += 1;
    }
    cout<<endl;
    
  }

}