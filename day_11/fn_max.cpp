#include<iostream>
using namespace std;
// function to find maximum of two numbers
int maximum(int a, int b);
int maximum(int a, int b)
{
    return max(a, b);
}
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // calling the maximum function
    int max_result = maximum(a, b);
    cout << "The maximum of " << a << " and " << b << " is: " << max_result << endl;

    return 0;
}