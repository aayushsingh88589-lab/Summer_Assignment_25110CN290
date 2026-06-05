#include <iostream>
using namespace std;

int main()
{
   
    int n, x, r, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    x = n;

    while(n != 0)
    {
        r = n % 10;
        int fact = 1;
        for(int i = 1; i <= r; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if(sum == x)
        cout << "Strong Number";
    else
        cout << "Not a Strong Number";

    return 0;
}

    