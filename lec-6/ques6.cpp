#include<iostream>
using namespace std;
int main(){
  int f = 1;
  int n;
  cout<<"enter number:"<<endl;
  cin>>n;
  for(int i =n; i>=1; i--){
    f *= i;
  }
  cout<<"factorial of given number is: "<< f;
}