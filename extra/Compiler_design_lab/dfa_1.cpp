#include <iostream>
#include <string>
using namespace std;
enum State { q0, q1 };
State transition(State currentState, char input) {
    switch (currentState) {
        case q0:
            if (input == 'a') return q1;
            else if(input == 'b') return q0;
            break;
        case q1:
            if (input == 'a') return q0;
            else if(input == 'b') return q1 ;
            break;
    }
    
}

bool isAccepted(string input) {
    State currentState = q0;

    for (char c : input) {
        currentState = transition(currentState, c);
        // if (currentState == Error) 
        // {
        //     return false;
        // }
        
    }
    return currentState == q0;
}

int main() {
    string input;

    cout << "Enter a string: ";
    cin >> input;

    if (isAccepted(input)) {
        cout << "Accepted" << endl;
    } else {
        cout << "Not Accepted" << endl;
    }

    return 0;
}