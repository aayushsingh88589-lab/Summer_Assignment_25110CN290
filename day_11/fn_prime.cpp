#include <iostream>
using namespace std;
// function to check the prime number.

int prime(int n);
int prime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        cout << "the number is prime";
    else
        cout << "the number is not a prime";
}
int main()
{
    int a;
    cout<<"enter any number: ";
    cin>>a;
    int result = prime(a);
    return 0;
}
