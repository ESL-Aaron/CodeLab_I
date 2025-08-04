#include <iostream>
using namespace std;

int isItEven(int n) { // Function to check if a number is even or odd
    return n % 2; // Then number is even if remainder is 0, odd if remainder is 1
}

int main() { // Main function to take user input and call isItEven function
    cout << "Welcome to the Even or Odd Checker!" << endl;
    int number; // Variable to store user input
    cout << "Enter a number to check if its even or odd: "; 
    cin >> number; // Taking input from the user

    if (isItEven(number) == 0) { // Check if the number is even or odd to print the result
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }

    return 0;
}