#include <iostream>
using namespace std;

void prefix(int arr[], int n) {
    int totalsum = 0, prefix = 0;

    for (int i = 0; i < n; i++) {
        totalsum += arr[i];
    }

    for (int i = 0; i < n - 1; i++) {    
        prefix += arr[i];
        if (totalsum == 2 * prefix) {
            cout << "YES" << endl;
            return; 
        }
    }

    cout << "NO" << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    prefix(arr, n); 
    return 0;
}
