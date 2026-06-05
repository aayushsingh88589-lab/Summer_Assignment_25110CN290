#include <iostream>
using namespace std;

int main()
{
    int n, l= 0;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 2; i <= n; i++)
    {
        while(n % i == 0)
        {
            l = i;
            n = n / i;
        }
    }

    cout << "Largest Prime Factor = " << l;

    return 0;
}