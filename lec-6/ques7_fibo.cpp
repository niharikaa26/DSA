#include<iostream>
using namespace std;
int main(){
  int n;
  int a=1;
  int b =1;
  int sum;
  sum = (a+b);
  cout<<"enter number:"<<endl;
  cin>>n;
  for (int i = 3; i<=n; i++){
    sum = a+b;
    a = b;
    b = sum;
  }
  cout<< "The digit is: "<< sum;

}