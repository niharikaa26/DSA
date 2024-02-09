#include<iostream>
using namespace std;
int main(){
  int n;
  int x=0;
  int a=1;
  cin>>n;
  for(int i =1; i<=n; i++){
    for(int j=1; j<=n-i; j++){
      cout<<" ";
    
    }
    
    for(int k=1; k<=i; k++){
        cout<<k;
      }

    for(int l=(i-1); l>0 ; l--){
      cout<<l;


    }
       x++;
    cout<<endl;
    }
   
  }
  