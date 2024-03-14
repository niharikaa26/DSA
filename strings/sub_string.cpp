#include<iostream>
#include<string>
using namespace std;
int main(){
  string s = "abcdef";
  cout<<s.substr(0)<<endl;
  cout<<s.substr(4)<<endl;
  cout<<s.substr(2,3);
}