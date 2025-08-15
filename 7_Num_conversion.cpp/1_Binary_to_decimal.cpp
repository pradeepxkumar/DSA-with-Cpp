#include<iostream>
using namespace std;

int main() {
    int binary, decimal = 0, base = 1; 
    cout << "Enter a binary number: ";
    cin >> binary;

    for (int i = binary; i > 0; i /= 10) {  
        int lastDigit = i % 10;            
        decimal += lastDigit * base;       
        base *= 2;                          
    }

    cout << "Decimal number is: " << decimal;
}
