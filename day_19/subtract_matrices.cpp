#include<iostream>
using namespace std;    
int main ()
{
    int a[10][10], b[10][10], diff[10][10], r, c;
    cout << "Enter the number of rows and columns of the matrices: ";
    cin >> r >> c;

    cout << "Enter elements of first matrix: " << endl;
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << ": ";
            cin >> a[i][j];
        }

    cout << "Enter elements of second matrix: " << endl;
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            cout << "Enter element b" << i + 1 << j + 1 << ": ";
            cin >> b[i][j];
        }

    // Subtracting Two matrices
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            diff[i][j] = a[i][j] - b[i][j];
        }

    // Displaying the resultant difference matrix
    cout << "Difference of the two matrices: " << endl;
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            cout << diff[i][j] << " ";
            if (j == c - 1)
                cout << endl;
        }

    return 0;
}