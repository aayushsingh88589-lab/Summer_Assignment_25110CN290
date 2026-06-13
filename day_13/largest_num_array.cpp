#include <iostream>
using namespace std;

int main()
{
    int n, largest;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n]; // declare an array of size n
    cout << "Enter " << n << " numbers: ";
    // input elements into the array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    largest = a[0]; // initialize largest with the first element of the array

    // find the largest element in the array
    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i]; // update largest if current element is greater
        }
    }

    cout << "Largest number in the array is: " << largest << endl;

    return 0;
}