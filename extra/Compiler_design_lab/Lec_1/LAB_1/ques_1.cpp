#include<iostream>
using namespace std;
int main(){
  string arr[] = {"zero", "one" , "two", "three" , "four" , "five", "six", "seven", "eight" , "nine"};
  int a,i,j,k,l;
  cout<<"enter a one/two/three digit number: "<<endl;
  cin>>a;
  if (a<10){
    cout<<arr[a];
  }
  else if(a>=10 && a<100){
    i = a/10;
    cout<<arr[i]<<" ";
    j = a%10;
    cout<<arr[j]<<" ";
  }
  else if(a>=100 && a<1000){
    i = a/100;
    cout<<arr[i]<<" ";
    j = a/10;
    k = j%10;
    cout<<arr[k]<<" ";
    l = a%10;
    cout<<arr[l];
    
  }
  else{
    cout<<"invalid input!!!!!!!";
  }


}