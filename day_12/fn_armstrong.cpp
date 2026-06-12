#include <iostream>
#include <cmath>
using namespace std;

int isArmstrong(int n);
int isArmstrong(int n) {
    int temp, digit, sum = 0, count = 0;

    temp = n;
    while (temp > 0) {
        temp = temp / 10;
        count++;
    }

    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }

    if (sum == n)
        return 1; // Armstrong number
    else
        return 0; // Not an Armstrong number
}
int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n) == 1)
        cout << "Armstrong number";
    else
        cout << "Not Armstrong number";

    return 0;
}