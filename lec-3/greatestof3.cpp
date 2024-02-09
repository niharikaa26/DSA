#include<iostream>
using namespace std;
int main(){
  int x,y,z;
  cout<< "enter numbers"<< endl;
  cin>>x>>y>>z;
  if (x>y && x> z){
    cout<< "x is greatest"<< endl;
  }
  else if (y>x && y> z){
    cout<< "y is greatest"<< endl;
  }

  else if (z>y && z> x){
    cout<< "z is greatest"<< endl;
  }

  else {
    cout << "equall";
  }
}