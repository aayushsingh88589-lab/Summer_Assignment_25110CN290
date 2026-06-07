#include<iostream>
using namespace std;

int main()
{
    int x, n, result = 1;
    cout << "Enter base: ";
    cin >> x;
    cout << "Enter exponent: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        result = result * x;
    }

    cout << "x^n = " << result << endl;
    return 0;
}
