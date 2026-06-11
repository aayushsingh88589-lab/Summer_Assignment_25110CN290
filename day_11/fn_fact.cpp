#include<iostream>
using namespace std;
// function to find factorial of a number
int factorial(int n);
int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    // calling the factorial function
    int fact_result = factorial(a);
    cout << "The factorial of " << a << " is: " << fact_result << endl;

    return 0;
}
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}