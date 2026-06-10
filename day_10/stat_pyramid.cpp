#include <iostream>
using namespace std;

int main() {
    // number of rows in the pyramid
    for(int i = 1; i <= 5; i++) {
        // print spaces before stars
        for(int space = 1; space <= 5 - i; space++) {
            cout << " ";
        }
        // print stars (odd count: 1,3,5,7,9)
        for(int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
