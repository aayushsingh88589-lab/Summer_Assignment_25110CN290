#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 5; i++) {
        // print spaces before characters
        for(int space = 1; space <= 5 - i; space++) {
            cout << " ";
        }
        // print increasing characters from 'A' up to ith character
        for(char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
        }
        // print decreasing characters from (i-1)th back to 'A'
        for(char ch = 'A' + i - 2; ch >= 'A'; ch--) {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
