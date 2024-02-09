#include<iostream>
using namespace std;
int main(){
  int ans=1;
  int a, b;
  cout<<"enter numbers:"<<endl;
  cin>>a>>b;
  for(int i=1; i<=b; i++){
    ans = ans*a;
  }
  cout<<ans;
  

}