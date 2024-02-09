#include<iostream>
using namespace std;
int main(){
  cout<<"enter size"<<endl;
  int size;
  int x = 0;
  cin>>size;
  int arr[size];
  for(int i =0; i<size; i++){
    cin>>arr[i];
    x+=arr[i];
  }
  cout<<x;
}