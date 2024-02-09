#include<iostream>
using namespace std;
int main(){
  int x;
  int sum=0;
  int d;
  cout<<"enter a number:"<<endl;
  cin>> x;
  while(x>0){
    d= x%10;
    cout<<d;
    x = x/10;
  }
  

  


}