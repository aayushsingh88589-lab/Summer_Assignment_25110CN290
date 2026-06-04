#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the term number n: ";
    cin >> n;

    int a = 0, b = 1, c;

    if(n == 0) {
        cout << "Fibonacci term = " << a << endl;
    }
    else if(n == 1) {
        cout << "Fibonacci term = " << b << endl;
    }
    else {
        for(int i = 2; i <= n; i++) {
            c = a + b;   
            a = b;        
            b = c;
        }
        cout << "Fibonacci term = " << c << endl;
    }

    return 0;
}
