#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {2, 3, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[n1 + n2];
    int k = 0;

    // Copy arr1
    for (int i = 0; i < n1; i++) {
        merged[k++] = arr1[i];
    }

    // Copy arr2
    for (int i = 0; i < n2; i++) {
        bool exists = false;
        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                exists = true;
                break;
            }
        }
        if (!exists) {
            merged[k++] = arr2[i];
        }
    }

    cout << "Union of Arrays: ";
    for (int i = 0; i < k; i++) {
        cout << merged[i] << " ";
    }
    return 0;
}
