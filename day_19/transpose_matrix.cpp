#include<iostream>
using namespace std;

int main()
{
    int a[10][10], transpose[10][10], r, c;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> r >> c;

    cout << "Enter elements of the matrix: " << endl;
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << ": ";
            cin >> a[i][j];
        }

    // Finding the transpose of the matrix
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            transpose[j][i] = a[i][j];
        }

    // Displaying the transpose matrix
    cout << "Transpose of the matrix: " << endl;
    for (int i = 0; i < c; ++i)
        for (int j = 0; j < r; ++j) {
            cout << transpose[i][j] << " ";
            if (j == r - 1)
                cout << endl;
        }

    return 0;
}