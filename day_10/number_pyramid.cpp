#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 5; i++) {
        // print spaces before numbers
        for(int space = 1; space <= 5 - i; space++) {
            cout << " ";
        }
        // print increasing numbers from 1 to i
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        // print decreasing numbers from i-1 down to 1
        for(int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
