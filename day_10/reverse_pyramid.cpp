#include <iostream>
using namespace std;

int main() {
    for(int i = 5; i >= 1; i--) {
        // print spaces before stars
        for(int space = 1; space <= 5 - i; space++) {
            cout << " ";
        }
        // print stars (odd count: 9,7,5,3,1)
        for(int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
