#include <iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        if (n % 2 == 1)  
            count++;
        n = n / 2;      
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Count of set bits = " << countSetBits(n);
    return 0;
}
