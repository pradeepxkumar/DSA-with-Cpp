#include<iostream>
using namespace std;

int main() {
    int binary, decimal = 0, base = 1;
    cout << "Enter binary number: ";
    cin >> binary;

    // Binary to Decimal
    for (int i = binary; i > 0; i /= 10) {
        int lastDigit = i % 10;
        decimal += lastDigit * base;
        base *= 2;
    }

    // Decimal to Octal
    int octal = 0, mul = 1;
    for (int i = decimal; i > 0; i /= 8) {
        int rem = i % 8;
        octal += rem * mul;
        mul *= 10;
    }

    cout << "Octal number: " << octal;
}
