#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the started no of range : ";
    cin >> n;

    int m;
    cout << "Enter the ending no of range : ";
    cin >> m;

    while (n <= m)
    {
        int prime = 0;

        if (n <= 1)
        {
            n++;
            continue;
        }
        else
        {
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
                cout << n << " ";
            }
        }

        n++;
    }

    return 0;
}