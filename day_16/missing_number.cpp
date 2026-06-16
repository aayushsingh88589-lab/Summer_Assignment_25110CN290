#include<iostream>
using namespace std;
int main() {
    //program to find the missing number in an array of size n .
    int n;
    cout<< "enter the size of array : ";
    cin >> n; // Input size of array
    int arr[n];
    
    // Input array elements
    cout<<"enter" << n << "elements of array: ";
    for(int i=0;i<n;i++) cin >> arr[i];
    
    int total_sum = n * (n + 1) / 2; // Sum of first n natural numbers
    int actual_sum = 0; // Sum of elements in the array
    
    // Calculate the sum of elements in the array
    for(int i=0;i<n;i++) actual_sum += arr[i];
    
    // The missing number is the difference between total_sum and actual_sum
    int missing_number = total_sum - actual_sum;
    
    cout << missing_number << endl; // Output the missing number
    
    return 0;
}