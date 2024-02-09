#include<iostream>
using namespace std;
int main(){
  int n;
  cin>> n;
  if(n%3 == 0 || n%5 == 0){

    if(n%15 != 0){
      
      cout<<"divisible by 3 or 5 but not by 15";
    }
    else {
      cout<<"not applicable"<< endl;
      
    }
    
  }

  else {
      cout<<"not applicable"<< endl;
      
    }

 
}