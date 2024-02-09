#include<iostream>
using namespace std;
int main(){
  int n,i;
 
  cout<<"enter limit:"<<endl;
  cin>>n;
   int sum=0;
  for(i=1; i<=n; i++){
    if(i%2!=0){
      sum = sum + i;
    }
    else if(i%2 ==0){
      sum -=i;
    }
  

  }
 cout<<sum;
}