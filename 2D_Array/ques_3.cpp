#include<iostream>
using namespace std;
int main(){
  int arr[3][3] = {{1,10,3},{4,5,6},{7,9,8}};
  int x=arr[0][0];
  int y;
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      y= arr[i][j];
      if(y != arr[0][0]) {
        x = x+y;
      }
      
    }
  }
  cout<<"the sum of elements is: "<<x<<endl;
}