#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    
    if (n <= 1)
    {
        cout << "NOT A PRIME NUMBER";
    }

    else
    {
        int prime = 0;
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                prime++;
                break;
            }
        }

        if (prime == 0)
        {
            cout << "A PRIME NUMBER";
        }
        else
        {
            cout << "NOT A PRIME NUMBER";
        }
    }
    return 0;
}