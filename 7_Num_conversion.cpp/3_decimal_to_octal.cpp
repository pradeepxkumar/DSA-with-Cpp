#include<iostream>
using namespace std;

int main() {
    int decimal, octal = 0, mul = 1;
    cout << "Enter decimal number: ";
    cin >> decimal;

    for (int i = decimal; i > 0; i /= 8) {
        int rem = i % 8;
        octal += rem * mul;
        mul *= 10;
    }

    cout << "Octal number: " << octal;
}
