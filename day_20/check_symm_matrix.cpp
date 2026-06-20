#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int a[20][20];
    cout << "Enter elements:\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }

    int flag = 1;

    // check if a[i][j] equals a[j][i] for all i,j
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0) break;
    }

    if(flag == 1)
        cout << "Matrix is Symmetric";
    else
        cout << "Matrix is Not Symmetric";

    return 0;
}
