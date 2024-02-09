#include<iostream>
using namespace std;
int n,s ;
void number(int *x){
 s = (*x)%10;
 while(n>9){
  n=n/10;
 }
}
int main(){
  cin>>n;
  number(&n);
  cout<<"last digit is:"<<s<<endl;
  cout<<"first digit is:"<<n;
}