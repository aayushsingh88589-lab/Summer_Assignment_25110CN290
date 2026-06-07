#include <iostream>
using namespace std;

int reverseNum = 0;

void reverse(int n)
{
    if(n == 0)
        return;

    reverseNum = reverseNum * 10 + (n % 10);
    reverse(n / 10);
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    reverse(num);

    cout << "Reversed number = " << reverseNum;

    return 0;
}