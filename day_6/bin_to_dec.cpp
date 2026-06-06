#include <iostream>
using namespace std;

int main()
{
    int n, dec = 0, base = 1, r;

    cout << "Enter a binary number: ";
    cin >> n;

    while (n > 0)
    {
        r = n % 10;
        dec += r * base;
        base *= 2;
        n /= 10;
    }

    cout << "Decimal number: " << dec;
    return 0;
}
