#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  // string s;
  string s1;
  // cin>>s;
  getline(cin,s1);
  // sort(s.begin(), s.end());
  sort(s1.begin(), s1.end());
  // cout<<s;
  cout<<s1;
}