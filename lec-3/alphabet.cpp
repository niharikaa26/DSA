#include<iostream>
using namespace std;
int main(){
  char n;
  cin>>n;
  if ((int)n >= 65 && (int)n <= 90){
    cout<<"yes, it's an alphabet";
  }
  else if((int)n >= 97 && (int)n <= 122){
    cout<<"yes, it's an alphabet";
  }

  else{
    cout<< "no";
  }
}