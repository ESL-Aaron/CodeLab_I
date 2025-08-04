#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> names = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"}; // Sample names list
    string searchItem; // Variable to hold the name to search for
    
    cout << "Enter name to search: "; // Asking user for name to search
    cin >> searchItem; // Storing user input in searchItem

    bool found = false; // Here we declare a boolean variable to track if the name is found
    // As boolean variables can only be true or false, we initialize it to false, as if "we haven't found the name yet".
    // We will iterate through the names vector to check if the searchItem exists in the list.
    // If we find the name, we will set found to true and break out of the loop.
    for (const string& name : names) {
        if (name == searchItem) {
            cout << "Found " << searchItem << " in the list." << endl; // If the name is found, we print a message.
            found = true;
            break; // Break out of the loop if the name is found
        }
    }

    if (!found) { // If the name was not found, we print a different message.
        cout << searchItem << " is not in the list." << endl;
    } 


    return 0;
}

