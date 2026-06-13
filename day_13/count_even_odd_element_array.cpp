#include<iostream>
using namespace std;
int main() {
    int n, even_count = 0, odd_count = 0;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];  //declare an array of size n
    cout << "Enter " << n << " numbers: ";
    //input elements into the array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        //count even and odd elements
        if(arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    cout << "Number of even elements: " << even_count << endl;
    cout << "Number of odd elements: " << odd_count << endl;
    return 0;
}