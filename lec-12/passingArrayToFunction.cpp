#include<iostream>
using namespace std;
void displayy(int a[]){
  for(int i = 0; i<=4; i++){
    cout<<a[i]<<" ";
  }
  return;
}
int main(){
  int arr[5] = {1,2,3,4,5};
  displayy(arr);
}