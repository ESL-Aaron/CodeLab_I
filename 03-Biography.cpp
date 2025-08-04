#include <iostream>
#include <string>
#include <limits> // Adicione esta biblioteca para std::numeric_limits
using namespace std;

int main() {
    string name;
    string hometown;
    int age;

    cout << "Enter your full name: " << endl; // Asking the user to input their full name.
    getline(cin, name); // Here im using getline before the cin to ensure the input is read even with there are spaces. Otherwise the input will stop at the first space.

    cout << "Enter your hometown: " << endl; // Asking the user to input their hometown.
    getline(cin, hometown); // Here is the same as above, using getline to read the input with spaces or especial characters.

    // Check if user enters valid input
    cout << "Enter your age: " << endl; // This piece of code is from git repository in codelab-i-ESL- resources folder, it checks if the user enters a valid input for age.
    cin >> age;
    while (cin.fail()) {
        cout << "Invalid input" << endl;
        cin.clear(); //clear bad input flag
        // Using numeric_limits<streamsize>::max() to make sure the buffer is cleared
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ignore input
        cout << "Enter your age: " << endl; // Repeats the prompt for age input
        cin >> age; //get number again
    }
    // After a successful input of age, we need to clear the input buffer.
    // This is because 'cin >>' leaves the newline character in the input buffer,
    // which can interfere with the next getline call.
    // So we use cin.ignore to clear the buffer, even if in this case it is not strictly necessary.
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n--- Biography ---\n" // here im using \n to break the line and send the text to another line within the same cout.
         << "Name: " << name << "\n"
         << "Hometown: " << hometown << "\n"
         << "Age: " << age << endl;

    return 0; 
}