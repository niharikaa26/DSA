#include<iostream>
using namespace std;
int main(){
  int x = 5 ;
  int* ptr = &x ;
  int** p = &ptr ;
  int*** q = &p;
  cout<<x<<endl<<*ptr<<endl<<**p<<endl<<***q;
}