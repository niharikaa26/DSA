#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v;
  int x, temp;
  for(int i =0; i<=5; i++){
    int x;
    cin>>x;
    v.push_back(x);
    
  }
  
  for(int i=0; i<2; i++){
    temp = v[i];
    v[i] =  v[v.size()/2-i-1] ;
    v[v.size()/2-i-1] = temp;

  }
  for(int i =0; i<=5; i++){
  cout<<v[i]<<" ";
    
  }

}