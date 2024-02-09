#include<iostream>
using namespace std;
int main(){
  int arr[] = {1,2,3,4,5,6};
  int* ptr = arr;
//   int* p = &arr[0];
//   int *c = arr;
//   cout<<ptr<<" and "<<p<<" and "<<c;
//   ptr[0] = 8;
   for(int i =0; i<= 5; i++ ){
    cout<<*ptr<<" ";
    ptr++;
   }

   ptr = arr;
   
}