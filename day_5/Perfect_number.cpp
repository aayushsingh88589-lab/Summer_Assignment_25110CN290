#include <iostream>
using namespace std;

int main()
{
    
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    /*Find all divisors of the number and add them.
    
    If the sum is equal to the number, it is a perfect number.*/

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
        cout << "Perfect Number";
    else
        cout << "Not a Perfect Number";

    return 0;
}
