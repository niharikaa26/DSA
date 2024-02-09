#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v(5,7);// iska mtlb hai ki sbki value 7 hogi.....
  cout<<v.capacity()<<endl;
  cout<<v.size();
}