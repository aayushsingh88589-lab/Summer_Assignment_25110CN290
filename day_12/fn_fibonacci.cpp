#include <iostream>
using namespace std;

// Function to print Fibonacci series up to n terms
void fibonacci(int n) {
    int a = 0, b = 1, c;   // initialize first two terms and variable for next term

    cout << "Fibonacci series: ";
    for(int i = 1; i <= n; i++) {
        cout << a << " ";       // print current term
        c = a + b;              // calculate next term
        a = b;                  // update first term
        b = c;                  // update second term
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter number of terms: ";
    cin >> num;

    // call the function to display Fibonacci series
    fibonacci(num);

    return 0;
}
