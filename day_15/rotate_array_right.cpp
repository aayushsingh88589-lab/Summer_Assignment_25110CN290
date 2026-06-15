#include<iostream>
using namespace std;

int main() {
    int n, d;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];  // declare an array of size n

    cout << "Enter " << n << " numbers: ";
    // input elements into the array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of positions to rotate right: ";
    cin >> d;

    // Normalize d in case it's larger than n
    d = d % n;

    // Temporary array to hold the last d elements
    int temp[d];

    // Store the last d elements in temp
    for(int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }

    // Shift the remaining elements to the right
    for(int i = n - d - 1; i >= 0; i--) {
        arr[i + d] = arr[i];
    }

    // Copy the last d elements from temp to the beginning of arr
    for(int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }

    // Print the rotated array
    cout << "Array after right rotation: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
