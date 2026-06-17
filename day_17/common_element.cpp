#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 2, 3};
    int arr2[] = {2, 2, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Common Elements: ";
    // Compare each element of arr1 with arr2
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                arr2[j] = -1; // Mark as used to avoid duplicate printing
                break;
            }
        }
    }
    return 0;
}
