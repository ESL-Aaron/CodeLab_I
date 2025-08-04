#include <iostream>
#include <string>   
using namespace std;

int main(){
    string password = "12345"; // Setting a predefined password
    string attempt; // This variable will hold the user input trying to match the password
    int attempts = 0; // This variable counts the number of attempts made by the user
    const int MaxAttempts = 5; // This variable serves to set the maximum number of attempts allowed 

    while (attempt != password && attempts < MaxAttempts){ // The loop continues until the password is matched or the maximum attempts are reached
        cout << "Enter your password: "; // Prompting the user to enter their guess
        cin >> attempt;
        attempts++; // This increase the attempt count each time the user inputs a guess
        
        if (attempt != password) {
            cout << "Incorrect attempt. Try again.\n"; // If the guess is incorrect, it informs the user
            if (attempts < MaxAttempts) { // This checks if the user has remaining attempts
                cout << "You have " << MaxAttempts - attempts << " attempts left." << endl; // It informs the user how many attempts are left
            }
        }
    }

    if (attempt == password) {
        cout << "Welcome to the Secure Area" << endl;
        
    } else { 
        cout << "Maximum attempts reached. Authorities have been alerted!." << endl; // If the maximum attempts are reached, it informs the user
    }

    return 0;
}