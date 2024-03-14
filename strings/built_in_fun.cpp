#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string str= "niharika is hustling";
  cout<<str.length()<<endl;
  //==============================
  str.push_back('e');
  cout<<str<<endl;
  str.pop_back();
  cout<<str<<endl;
  str.pop_back();
  str.pop_back();
  str.pop_back();
  cout<<str<<endl;
  //====================================
  string s = "abc";
  cout<<s<<endl;
  s= "xyz" + s;
  cout<<s<<endl;
  //=======================
  //reverse

  reverse(s.begin(), s.end());
  cout<<s<<endl;
  //variation in reverse
  reverse(s.begin()+2, s.end());
  cout<<s<<endl;


  //input a string of even length and reverse half of string
  string str_1;
  cin>>str_1;
 int n = str_1.length();
  reverse(str_1.begin(), str_1.begin()+(n/2));
  cout<<str_1<<endl;

}