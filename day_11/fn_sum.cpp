#include<iostream>
using namespace std;    
// function to calculate sum of two numbers
int sum(int a, int b) ;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // calling the sum function
    int sum_result = sum(a, b);
    cout << "The sum of " << a << " and " << b << " is: " << sum_result << endl;

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
