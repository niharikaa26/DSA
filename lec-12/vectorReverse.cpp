#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v;
  int x, y;
  for(int i =0; i<=5; i++){
    int x;
    cin>>x;
    v.push_back(x);
    
  }

  cout<<endl;
  vector<int> vc;
  for(int i =v.size() -1 ; i>=0; i--){
    
    vc.push_back(v[i]);
    
  }
  for(int i =0; i<vc.size(); i++){
    cout<<vc[i]<<" ";
    
  }


}