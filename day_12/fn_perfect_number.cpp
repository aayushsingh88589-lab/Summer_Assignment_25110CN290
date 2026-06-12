#include <iostream>
using namespace std;

// Function to check if a number is perfect
// Returns 1 if perfect, 0 if not
int isPerfect(int n) {
    int sum = 0;

    // find divisors of n (excluding n itself)
    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            sum += i;   // add divisor to sum
        }
    }

    // compare sum of divisors with original number
    if(sum == n)
        return 1;   // perfect number
    else
        return 0;   // not perfect
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // call the function and check result
    if(isPerfect(num) == 1)
        cout << "Perfect Number";
    else
        cout << "Not Perfect Number";

    return 0;
}
