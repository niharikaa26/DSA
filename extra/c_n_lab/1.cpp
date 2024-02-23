#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
  int m,a;
  cout<<"enter data bits: "<<endl;
  cin>>m;
  int k = 0;
  while((pow(2,k)) < k+m){
    k++;
  }
  cout<<"redundant bits required: "<< k<<endl;
  a = m+k;
  int arr[a+1];
  for(int i =1; i<=a; i++){
    for(int j=0; j<k; j++){
      if(i== pow(2,j)){
        arr[i]= 2;
      }
    }
    if(arr[i] != 2){
      cout<<"enter: "<<endl;
      cin>>arr[i];
    }
  }

  
  

  for(int i=1; i<=a; i++){
    cout<<arr[i]<<" ";
  }

}