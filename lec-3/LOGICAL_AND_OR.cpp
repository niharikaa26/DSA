#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  // if(n %3==0 && n%5 == 0){

  //   cout<< "yes, divisible by both";

  // }

  // else{
  //   cout<< "no";
  // }

  if(n %3==0 || n%5 == 0){

    cout<< "yes, divisible";

  }

  else{
    cout<< "no";
  }
}
