#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {2, 4, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Create sets from both arrays
    set<int> s1(arr1, arr1 + n1);
    set<int> s2(arr2, arr2 + n2);

    cout << "Intersection of Arrays: ";
    // Check each element of s1 in s2
    for (auto x : s1) {
        if (s2.find(x) != s2.end()) {
            cout << x << " ";  // Print common elements
        }
    }
    return 0;
}
