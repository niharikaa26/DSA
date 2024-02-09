#include<iostream>
using namespace std;
int main(){
  int n;
  int a =0;
  cout<<"enter:";
  cin>>n;
  int x=n;
  for(int i=1; i<=2*n-1; i++){
    
      for(int j =1; j<=(2*n-1); j++){
        if(j>a && j<2*n-a){
           cout<<x;

        }
        else {
          cout<<"*";
        }
       
      
    } 
    a++;
    x--;
    cout<<endl;
  }
  }