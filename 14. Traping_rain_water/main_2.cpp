#include <iostream>
#include <chrono>  // for measuring time
using namespace std;
using namespace std::chrono;

int trap(int arr[], int n) {
    int left = 0, right = n - 1;
    int leftMax = 0, rightMax = 0;
    int water = 0;

    while (left < right) {
        if (arr[left] < arr[right]) {
            if (arr[left] >= leftMax) {
                leftMax = arr[left];
            } else {
                water += leftMax - arr[left];
            }
            left++;
        } else {
            if (arr[right] >= rightMax) {
                rightMax = arr[right];
            } else {
                water += rightMax - arr[right];
            }
            right--;
        }
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
