#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is Armstrong
int isArmstrong(int n) {
    int temp, digit, sum = 0, count = 0;

    // Count number of digits in n
    temp = n;
    while (temp > 0) {
        temp = temp / 10;
        count++;
    }

    // Calculate sum of each digit raised to 'count'
    temp = n;
    while (temp > 0) {
        digit = temp % 10;              // extract last digit
        sum = sum + pow(digit, count);  // add digit^count to sum
        temp = temp / 10;               // remove last digit
    }

    // Compare sum with original number
    if (sum == n)
        return 1; // Armstrong number
    else
        return 0; // Not an Armstrong number
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    // Call function and display result
    if (isArmstrong(n) == 1)
        cout << "Armstrong number";
    else
        cout << "Not Armstrong number";

    return 0;
}
