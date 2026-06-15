#include <iostream>
using namespace std;

int main() {
    // Input size of the array
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Declare array of size n
    int arr[n];

    // Input elements into the array
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print the original array
    cout << "Original array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Print the array in reverse order
    cout << "Reversed array: ";
    for(int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
 