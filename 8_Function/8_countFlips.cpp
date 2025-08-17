#include <iostream>
using namespace std;

int countFlips(int a, int b) {
    int x = a ^ b;  
    int count = 0;
    while (x > 0) {
        if (x % 2 == 1) count++; 
        x = x / 2;
    }
    return count;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Bits to flip = " << countFlips(a, b);
    return 0;
}
