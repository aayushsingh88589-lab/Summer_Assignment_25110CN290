#include <iostream>
using namespace std;
// function for palindrome  .

int isPalindrome(int n);
int isPalindrome(int n)
{
    int r, rev = 0, x = n;
    // reverse the digits of the number
    while (n > 0)
    {
        r = n % 10;         // extract last digit
        rev = rev * 10 + r; // build reversed number
        n = n / 10;         // remove last digit
    }
    // compare reversed number with original
    if (x == rev)
        return 1;
    else
        return 0;
}
int main()
{
    int n;

    cout << "enter any number: ";
    cin >> n;
    if (isPalindrome(n) == 1)
        cout << "the number is a palindrome";
    else
        cout << "the number is not a palindrome";
    return 0;
}