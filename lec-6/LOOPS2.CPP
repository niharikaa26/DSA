#include<iostream>
using namespace std;
int main(){
  int n;
  
  cout<<"enter a number:"<< endl;
  cin>>n;
  bool flag;
  for(int i = 2; i<=(n-1); i++){
    if(n%i == 0){
      // cout<<n<<" is a composite number"<< endl;
     flag = false;
      break;
    }
    else{
      flag = true;
    }
  }
  if(n==1){
    cout<<"neither prime nor composite";
  }
  if (flag == true)
{
  cout<<"prime"<<endl;
}
else{
  cout<<"composite"<<endl;
}
}