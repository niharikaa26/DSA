#include<iostream>
using namespace std;
int x=0,y=0;
int main(){
  int arr[3][3] = {{1,10,3},{4,5,6},{7,9,8}};
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      y= arr[i][j];
      if(y> x){
        x= y;
      }
    }
  }
  cout<<"the largest element is: "<<x<<endl;
}