#include<iostream>
using namespace std;
void StarTriangle(int x){
  for(int i=0; i<x; i++){
    for(int j=0; j<i; j++){
      cout<<"*";
    }
    cout<<endl;
  }
}
int main(){
  StarTriangle(3);

}