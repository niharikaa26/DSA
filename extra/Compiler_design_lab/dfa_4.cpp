#include <iostream>
#include <string>
using namespace std;
enum State { q0, q1, Error };
State transition(State currentState, char input) {
    switch (currentState) {
        case q0:
            if (input == 'a') return q0;
            else if(input == 'b') return q1;
            break;
        case q1:
            if (input == 'a') return q1;
            else if(input == 'b') return Error;
            break;  
    }
    return Error;
}

bool isAccepted(string input) {
    State currentState = q0;

    for (char c : input) {
        currentState = transition(currentState, c);
        if (currentState == Error) 
        {
            return false;
        }
        
    }
    return currentState == q1;
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