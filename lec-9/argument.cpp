#include<iostream>
using namespace std;
void fun(int x, int y){
  cout<<"address of local x:"<< &x<< endl;
  cout<<"address of local y:"<< &y<< endl;

}

int main(){
  int x;
  int y ;
  cout<<"address of main x:"<<&x<<endl;
  cout<<"address of main y:"<<&y<<endl;
  fun(x,y);
}