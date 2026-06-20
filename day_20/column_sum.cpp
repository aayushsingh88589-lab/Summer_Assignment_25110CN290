#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    int a[20][20];
    cout << "Enter elements:\n";
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cin >> a[i][j];
        }
    }

    // add elements of each column
    for(int j=0; j<c; j++) {
        int sum = 0;
        for(int i=0; i<r; i++) {
            sum += a[i][j];
        }
        cout << "Sum of column " << j+1 << " = " << sum << endl;
    }

    return 0;
}
