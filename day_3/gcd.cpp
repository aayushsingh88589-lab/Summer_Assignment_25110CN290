#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the first number  : ";
    cin >> n;

    int m;
    cout << "Enter the second number : ";
    cin >> m;

    int GCD = 1;
    for (int i = 1; i <= min(n, m); i++)
    {
        if (n % i == 0 && m % i == 0)
            GCD = i;
    }

    
    cout << "GCD = " << GCD;

    return 0;
}