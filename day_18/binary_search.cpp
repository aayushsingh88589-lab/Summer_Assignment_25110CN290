#include <iostream>
using namespace std;

int main() {
    // Initialize a sorted array 
    int arr[] = {11, 22, 33, 44, 55, 66, 77};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int low = 0, high = n - 1;
    bool found = false;  // flag to check if element is found

    // Binary Search loop
    while (low <= high) {
        int mid = (low + high) / 2;  // middle index

        if (arr[mid] == key) {
            cout << "Element found at index " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] < key) {
            // Search in right half
            low = mid + 1;
        }
        else {
            // Search in left half
            high = mid - 1;
        }
    }

    if (!found) {
        cout << "Element not found in array." << endl;
    }

    return 0;
}
