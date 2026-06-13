#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];  //declare an array of size n
    cout << "Enter " << n << " numbers: ";
    //input elements into the array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "You entered: ";
    //output the elements of the array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}