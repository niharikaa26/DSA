#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string s, s1;
  cout<<"enter string 1:"<<endl;
  cin>>s;
  cout<<"enter string 2:"<<endl;
  cin>>s1;
  sort(s.begin(), s.end());
  sort(s1.begin(), s1.end());
  if(s == s1){
    cout<<"yes,anagram";
  }
}