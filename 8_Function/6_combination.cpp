#include <iostream>
using namespace std;

int fact(int n) {
    int ans = 1;
    for(int i=1; i<=n; i++) {
        ans *= i;
    }
    return ans;
}

int nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n-r));
}

int main() {
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    if(r > n) {
        cout << "Invalid input! r should be <= n";
    } else {
        cout << "nCr = " << nCr(n, r);
    }
    return 0;
}
