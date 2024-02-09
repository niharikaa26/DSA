#include<iostream>
using namespace std;
int main(){
  int n;
  bool flag;
  int a =1;
  cout<<"enter:";
  cin>>n;
  for(int i=n+1; i>=1; i--){
    if(i==(n+1)){
      for(int j =1; j<=(2*n+1); j++){
      cout<<"*";
    }
    }

    else{
       for(int k =1; k<=i; k++){
      cout<<"*";
    }
     for(int l=1; l<=a; l++){
      cout<<" ";
      flag=1;
     }
     for(int m=1; m<=i; m++){
      cout<<"*";
     }
    }
    
    cout<<endl;
    if (flag ==1){
      a= a+2;
    }
    
   


    
    
  }
}