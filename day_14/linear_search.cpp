#include<iostream>
using namespace std;
int main() {
    int n, key, flag = 0;
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
    //linear search algorithm

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            flag++;
            break;
        }
    }
    if(flag !=0) {
        cout << key << " is present in the array." << endl;
    } else {
        cout << key << " is not present in the array." << endl;
    }
    return 0;
}