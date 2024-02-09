#include<iostream>
using namespace std;
int main(){
  int x;
  int count =0 ;
  cout<<"enter the number:"<< endl;
  cin>>x;
  while(x>0){
    x = x/10;
    count ++;
  }
  if(x==0){
    count =1;
  }
  cout<<"digits:"<<count;
}