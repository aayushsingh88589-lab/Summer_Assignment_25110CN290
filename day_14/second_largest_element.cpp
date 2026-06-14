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
   //second largest element algorithm
    int largest = arr[0];
    int second_largest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    cout << "The second largest element is: " << second_largest << endl;
    return 0;
}