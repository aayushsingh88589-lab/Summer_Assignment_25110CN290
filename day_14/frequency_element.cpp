#include<iostream>
using namespace std;
int main() {
    int n, key;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];  //declare an array of size n
    cout << "Enter " << n << " numbers: ";
    //input elements into the array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the number to search: ";
    cin >> key;
    //frequency count algorithm
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            count++;
        }
    }
    cout << key << " occurs " << count << " times in the array." << endl;
    return 0;
}