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

    // add elements of each row
    for(int i=0; i<r; i++) {
        int sum = 0;
        for(int j=0; j<c; j++) {
            sum += a[i][j];
        }
        cout << "Sum of row " << i+1 << " = " << sum << endl;
    }

    return 0;
}
