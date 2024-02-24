#include<iostream>
using namespace std;
bool sum;
bool carry = 0;
bool adding(bool a , bool b){
  if (a  == 0 && b == 0){
    sum = 0;
    carry =0;
  }
  else if(a== 1 && b==0){
    sum = 1;
    carry = 0;

  }
  else if(a== 0 && b==1){
    sum = 1;
   carry = 0;
  }
  else if (a== 1 && b== 1 && carry ==0){
    sum = 0;
    carry = 1;
   
  }
  
   else if (a== 1 && b== 1 && carry ==1){
    sum = 1;
    carry = 1;
    
  }

  
  }
int main(){
  int n;
  int segment;
  cout<<"enter number of bits: "<<endl;
  cin>>n;
  bool arr[n+1];
  cout<<"enter data: "; 
  for(int i=1; i<=n; i++){
    cin>>arr[i];
  }
  segment =n/2;
  for(int i=1; i<=segment; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  for(int i=segment+1; i<=n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  bool arr2[n/2];
  bool arr3[n/2];
  for(int i = 0; i<= n/2 ; i++){
   adding(arr[n-i] , arr[(n/2)-i]) ;
   arr2[i] = sum;
  }
  int c = carry;
  for(int i = 0; i<= n/2 ; i++){
   adding(arr2[n/2-i] , c) ;
   arr3[i] = sum;
  }

  for(int i=(n/2)-1; i>=0; i--){
    cout<<arr2[i]<<" ";
  }
  cout<<endl<<"doing 1s complement.........."<< endl;
  for(int i = 0; i<= n/2 ; i++){
    if(arr2[i] == 0){
      arr2[i] = 1;
    }
    else{
      arr2[i] = 0;
    }
  }
  cout<<"after 1s complement:"<< endl;
  for(int i=(n/2)-1; i>=0; i--){
    cout<<arr2[i]<<" ";
  }
}