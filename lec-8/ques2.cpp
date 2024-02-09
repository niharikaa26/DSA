#include<iostream>
using namespace std;
int main(){
  int n;
  int x=0;
  cin>>n;
  for(int i = 1; i<= n; i++){
    for(int j=n-1; j>=i; j--){
    cout<<" ";
    
    }
    
    for(int k=1; k<=(i+x); k++){
        cout<<"*";
    }
    x++;
    cout<<endl;
  }
  
}