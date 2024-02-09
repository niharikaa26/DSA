#include<iostream>
using namespace std;
int main(){
  int n;
  bool flag;
  int a =0;
  int x=0;
  cin>>n;
  for(int i = 1; i<= (2*n-1);  i++){
    for(int j=n-1; j>=i; j--){
    cout<<" ";
    
    }
    if(i>n){
       for(int l=0; l<(i-n); l++ ){
        cout<<" ";
       }

    }
   
   if(x<=(n-1)){
    for(int k=1; k<=(i+x); k++){
        cout<<"*";
    }
      
    }
  
    if(i>n){
      for(int m=1; m<=(i+a); m++){
        
        cout<<"*";
        flag=1;
      }
      
    }
    if(flag ==1){
      a=(a-3);
    }
    x++;
    cout<<endl;
  }
  
}