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
  cout<<"what is required sum: "<<endl;
  cin>>y;
  for(int i=0; i<v.size(); i++){
    for(int j =i+1; j<v.size(); j++){
      if(v[i]+v[j] == y){
        cout<<i<<" and "<<j<<endl;
      }
    }
  }

}