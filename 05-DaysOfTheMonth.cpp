#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month (1-12): ";
    cin >> month;

// Determines the number of days in the month based on user input using a switch statement.
// Using switch statement is convenient beacuse the number of cases is limited and it makes the code more readable.
    switch (month) { 
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            cout << "31 days" << endl;
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            cout << "30 days" << endl;
            break;
        case 2: // February
            cout << "28 days" << endl; // Leap year consideration not included
            break;
        default:
            cout << "Invalid month" << endl;
    }
}