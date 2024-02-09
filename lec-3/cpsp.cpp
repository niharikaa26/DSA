#include<iostream>
using namespace std;
int main(){
  int sp,cp;
  cout<<"enter selling price:"<< endl;
  cin>> sp;
  cout<<"enter cost price:"<< endl;
  cin>> cp;
  if(cp>sp){
    cout<<"loss:" << (cp-sp)<< endl;
  }
  else if(sp>cp){
    cout<<"pft:" << (sp-cp)<< endl;
  }

  else{
    cout<< "NO LOSS & NO PROFIT";
  }

}