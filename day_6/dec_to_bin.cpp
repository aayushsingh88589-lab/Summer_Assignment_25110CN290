#include<iostream>
#include<cmath>
using namespace std;    

int main()
{
    int n, x, y = 0;

    cout << "Enter a decimal number: ";
    cin >> n;

    for(int i=0; n > 0; i++)
    {
        x = n % 2;
        y += x * pow(10, i);
        n /= 2;
    }

    cout << "Binary number: " << y;
    return 0;
}