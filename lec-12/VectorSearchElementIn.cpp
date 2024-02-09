#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v;
  int x;
  for(int i =0; i<5; i++){
    int x;
    cin>>x;
    v.push_back(x);
    
  }
  cout<<"what you want to search:"<<endl;
  cin>>x;
  for(int i = v.size()-1 ; i>=0; i--){
    cout<<v[i]<<" "<<endl;
    if(v[i] == x){
      cout<<"the index is: "<< i;
      break;
    }
  }

}