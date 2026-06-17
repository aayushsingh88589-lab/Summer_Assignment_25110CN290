#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[n1 + n2];

    // Copy arr1
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy arr2
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    cout << "Concatenated Array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }
    return 0;
}
