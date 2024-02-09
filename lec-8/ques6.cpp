#include<iostream>
using namespace std;
int main(){
  int n;
  int x=2;
  bool flag;
  int d;
  int a =1;
  cout<<"enter:";
  cin>>n;
  for(int i=n+1; i>=1; i--){
    if(i==(n+1)){
      for(int j =1; j<=(2*n+1); j++){
      cout<<j;
    }
    }

    else{
       for(int k =1; k<=i; k++){
      cout<<k;
    }
     for(int l=1; l<=a; l++){
      cout<<" ";
      flag=1;
     }
     for(int m=n+x; m<=(2*n+1); m++){
      cout<<m;
      d=0;
     }
    }
    
    cout<<endl;
    if (flag ==1){
      a= a+2;
    }
    if(d ==0){
      x++;
    }
    
   


    
    
  }
}