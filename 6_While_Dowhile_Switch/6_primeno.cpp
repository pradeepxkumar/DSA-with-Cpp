#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 2) {
        cout << "Not Prime.";
    }
    else {
        bool isPrime = true; 
        int i = 2;

        while (i <= n / 2) {   
            if (n % i == 0) {  
                isPrime = false;
                break;        
            }
            i++;
        }

        if (isPrime) {
            cout << "It is a prime number.";
        } else {
            cout << "Not Prime.";
        }
    }
}
