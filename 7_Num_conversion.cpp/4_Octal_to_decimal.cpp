#include<iostream>
using namespace std;

int main() {
    int octal, decimal = 0, base = 1;
    cout << "Enter octal number: ";
    cin >> octal;

    for (int i = octal; i > 0; i /= 10) {
        int lastDigit = i % 10;
        decimal += lastDigit * base;
        base *= 8;
    }

    cout << "Decimal number: " << decimal;
}
