#include<iostream>
using namespace std;

int main(){
  int x = 10;
  int y = 45;
  int a,b;
  float z;
  cout<<x+y<<endl;
  cout<<x-y<<endl;
  cout<<x*y<< endl;
  cout<< x/y<<endl;
  cout<<x%y <<endl;
  x++;
  cout<<x<<endl;
  ++x;
  /*
  ++x m pehle add hoga phir print hoga
  like cout<<++x<< will print updated value

  buttttt......

  x++ m phle print hoga phir update hoga
  like cout<<x++ << will print purani value but update krdega.....
  system mei......
  */
  cout<<x;
  cout<<"enter:" <<endl;
  cin>>a; //dividend
  cin>>b; //divisor
  
  cout<<a%b;


  
}