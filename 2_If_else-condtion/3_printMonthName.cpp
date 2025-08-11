#include <iostream>
using namespace std;

int main() {
    int monthNumber;
    cout << "Enter a number (1-12) for the month: ";
    cin >> monthNumber;

    string monthName;

    switch (monthNumber) {
        case 1: monthName = "January"; break;
        case 2: monthName = "February"; break;
        case 3: monthName = "March"; break;
        case 4: monthName = "April"; break;
        case 5: monthName = "May"; break;
        case 6: monthName = "June"; break;
        case 7: monthName = "July"; break;
        case 8: monthName = "August"; break;
        case 9: monthName = "September"; break;
        case 10: monthName = "October"; break;
        case 11: monthName = "November"; break;
        case 12: monthName = "December"; break;
        default:
            cout << "Invalid input. Please enter a number between 1 and 12." << std::endl;
            return 1; // Indicate an error
    }

    cout << "The month is: " << monthName << endl;

    return 0;
}