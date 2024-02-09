#include <iostream>
using namespace std;
int main(){
  int n;
  cout<< "enter:";
  cin>>n;
  // cout<<abs(n);

  if(n<0){
    n = -n;
  
  }
  cout<< n;
}