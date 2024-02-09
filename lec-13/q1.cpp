#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v;
  v.push_back(0);
  v.push_back(1);
  v.push_back(0);
  v.push_back(1);
  v.push_back(0);
  for(int i =0; i<v.size(); i++){
   cout<<v[i]<<" ";
  }
  cout<<endl;
  
  int x=0, y=0;
  for(int i =0; i<v.size(); i++){
    if(v[i] == 0){
      x++;
    }
    else{
      y++;
    }
    
  }
  for(int i=0; i<x; i++){
    v[i] = 0;
  }
  for(int i =x; i<v.size(); i++){
   v[i] = 1;
  }
   for(int i =0; i<v.size(); i++){
   cout<<v[i]<<" ";
  }

}