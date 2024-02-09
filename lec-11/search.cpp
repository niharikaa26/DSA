#include<iostream>
using namespace std;
int main(){
  cout<<"enter size"<<endl;
  int size;
  bool flag = false;
  int x ;
  cin>>size;
  int arr[size];
  for(int i =0; i<size; i++){
    cin>>arr[i];
    if (arr[i] == x){
      flag = true;
    }
  }
  if (flag == true){
    cout<<"present"<<endl;

  }
  else{
    cout<<"not present";
  }

}