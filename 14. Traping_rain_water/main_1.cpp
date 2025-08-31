#include <iostream>
#include <chrono>  // for measuring time
using namespace std;
using namespace std::chrono;

int trap(int arr[], int n) {
    int water = 0, leftmax = 0, rightmax = 0, index = 0, maxheight = arr[0];
    
    // Find index of maximum height
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxheight) {
            maxheight = arr[i];
            index = i;
        }
    }

    // Left side
    for (int i = 0; i < index; i++) {
        if (leftmax > arr[i])
            water += leftmax - arr[i];
        else
            leftmax = arr[i];
    }

    // Right side
    for (int i = n - 1; i > index; i--) {
        if (rightmax > arr[i])
            water += rightmax - arr[i];
        else
            rightmax = arr[i];
    }

    return water;
}

int main() {
    int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Start time
    auto start = high_resolution_clock::now();

    int result = trap(arr, n);
    cout << "Total water trapped: " << result << endl;

    // End time
    auto stop = high_resolution_clock::now();

    // Duration in microseconds
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken: " << duration.count() << " microseconds" << endl;

    return 0;
}
