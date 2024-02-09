#include<iostream>
using namespace std;
int main(){
  char n;
  int y;
  cin>> n;
  y = (int)n;
  if(y == 97 || y == 101 || y == 105 || y == 111 || y == 117 ){
    cout<< "lowercase vowel";
  }
  else if (y == 65 || y == 69 || y == 73 || y == 79 || y == 85){
    cout<< "uppercase vowel";
  }
  else{
    cout<< "not a vowel";
  }
}