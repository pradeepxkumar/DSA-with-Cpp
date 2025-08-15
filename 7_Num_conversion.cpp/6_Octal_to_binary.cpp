#include<iostream>
using namespace std;

int main() {
    int octal, decimal = 0, base = 1;
    cout << "Enter octal number: ";
    cin >> octal;

    // Octal to Decimal
    for (int i = octal; i > 0; i /= 10) {
        int lastDigit = i % 10;
        decimal += lastDigit * base;
        base *= 8;
    }

    // Decimal to Binary
    int binary = 0, mul = 1;
    for (int i = decimal; i > 0; i /= 2) {
        int rem = i % 2;
        binary += rem * mul;
        mul *= 10;
    }

    cout << "Binary number: " << binary;
}
