#include <iostream>
using namespace std;

int main() {
    // Initialize array
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Outer loop for passes
    for (int i = 0; i < n - 1; i++) {
        // Assume the current index is the minimum
        int minIndex = i;

        // Inner loop to find the smallest element in the remaining array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  // Update minIndex if smaller element found
            }
        }

        // Swap the found minimum element with the first element of unsorted part
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    // Print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
