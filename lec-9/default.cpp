#include<iostream>
using namespace std;
void fun(int x=10, float y= 10.89){
  cout<< x<< endl;
  cout<< y<< endl;

}

int main(){
  int x =2;
  int y =6;

  fun(x,y);
}