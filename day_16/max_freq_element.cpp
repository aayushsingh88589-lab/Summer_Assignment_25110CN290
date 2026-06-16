#include <iostream>
#include <unordered_map> // For frequency counting
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 1: Count frequency of each element using a map
    unordered_map<int, int> freq;
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;  // Increase count for arr[i]
    }

    // Step 2: Find element with maximum frequency
    int maxFreq = 0;
    int maxElement = arr[0];
    for(auto it : freq) {
        if(it.second > maxFreq) {
            maxFreq = it.second;
            maxElement = it.first;
        }
    }

    // Step 3: Print result
    cout << "Element with maximum frequency: " << maxElement << endl;
    cout << "It appears " << maxFreq << " times." << endl;

    return 0;
}
