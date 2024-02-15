#include <iostream>
#include <string>
using namespace std;
void change(string res){
  int x;
  x = res.length(); 
  for(int i =(x-1); i>=0; i--){
    if(i=(x-1)){
      res[i] = res[0];
    }
    
     

  }
   
}
int main () {
  string res;
  cout<<"enter input: ";
  getline(cin,res);
  if(res[0] == 'a' || res[0] == 'e' || res[0] == 'i' || res[0] == 'o'  ){
    cout<<"resultant string is: "<<res + "yay" << endl;
  }
  else if(res[0] == 'u'){
    if (res[1] == 'q'){
      cout<<"resultant string is: "<<res + "ay"<<endl;
    }
    else{
      cout<<"resultant string is: "<<res + "yay" << endl;
    }
  }
  else if(res[0] == 'y'){
    if (res[1] == 'a' || res[1] == 'e' || res[1] == 'i' || res[1] == 'o' || res[1] == 'u' ){
      cout<<"resultant string is: "<<res + "ay"<<endl;
    }
    else{
      cout<<"resultant string is: "<<res + "yay" << endl;
    }
  }
  else{
    cout<<res + "ay";
  }
  return 0;
}
