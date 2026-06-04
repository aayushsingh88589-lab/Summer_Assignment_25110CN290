#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;
    cout << "Enter range start end : ";
    cin >> start >> end;

    for (int n = start; n <= end; n++) {
        int temp = n, digit, sum = 0, count = 0;

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
            cout << n << " ";
    }

    return 0;
}
