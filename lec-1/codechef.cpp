#include <iostream>
using namespace std;

int main() {
    int T;
    int length;
    string input;
    int x ;
    cin>> T;
    for(int i =0 ; i< T; i++){
        cin>> length;
        cin>> input;
        x=0;
        for(int j = 0; j< length; j++){
            if( input[j] == 'a' || input[j] == 'e' || input[j] == 'i'  || input[j] == 'o' || input[j]=='u'){
                x = 0;
                continue;
            }
            else {
                x++;
                 if (x>=4){
                
                break;
              }
            }
           
            
          }
           if (x<4){
            cout<<"YES"<<endl;
          
        }
        else{
          cout<< "NO" << endl;
        }
     
    }
	return 0;
}
