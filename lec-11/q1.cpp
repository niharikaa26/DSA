#include<iostream>
using namespace std;
int main(){
  int arr[7]={69,89,87,34,22,12,67};
  for(int i=0; i<7; i++){
    if (arr[i]<35){
      cout<<i<<endl;
    }
  }
}