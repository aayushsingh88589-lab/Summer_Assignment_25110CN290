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
    //find duplicate elements algorithm
    cout << "Duplicate elements in the array are: ";
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }   
    
    return 0;
}