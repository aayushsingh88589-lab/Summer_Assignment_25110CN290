#include<iostream>
using namespace std;
int main() {
    int n, d;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];  //declare an array of size n
    cout << "Enter " << n << " numbers: ";
    //input elements into the array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the number of positions to rotate left: ";
    cin >> d;

    // Rotate the array to the left by d positions
    int temp[d]; // Temporary array to hold the first d elements

    // Store the first d elements in temp
    for(int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the left
    for(int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Copy the first d elements from temp to the end of arr
    for(int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }

    // Print the rotated array
    cout << "Array after left rotation: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}