#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    // Logic: check all pairs using nested loops
    bool found = false;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
                found = true;
                break; // stop after finding one pair
            }
        }
        if(found) break;
    }

    if(!found) {
        cout << "No pair found with given sum." << endl;
    }

    return 0;
}
