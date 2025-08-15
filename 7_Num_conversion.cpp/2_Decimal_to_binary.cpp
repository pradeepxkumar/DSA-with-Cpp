#include<iostream>
using namespace std;

int main() {
    int n, ans = 0, mul = 1;
    cout << "Enter the decimal number: ";
    cin >> n;

    for (int i = n; i > 0; i /= 2) {  
        int rem = i % 2;              
        ans += rem * mul;           
        mul *= 10;                    
    }

    cout << "Binary number is: " << ans;
}
