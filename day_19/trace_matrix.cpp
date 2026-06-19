#include<iostream>
using namespace std;
int main ()
{
    int a[10][10], trace = 0, r, c;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> r >> c;

    cout << "Enter elements of the matrix: " << endl;
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << ": ";
            cin >> a[i][j];
        }

    // Finding the trace of the matrix
    for (int i = 0; i < r; ++i) {
        trace += a[i][i];
    }

    // Displaying the trace of the matrix
    cout << "Trace of the matrix: " << trace << endl;

    return 0;
}