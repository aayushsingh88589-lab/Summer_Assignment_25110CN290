#include <iostream>
#include <cstring>   // for strlen
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = strlen(str);   // find length
    bool isPalindrome = true;   // assume true

    for(int i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            isPalindrome = false;   // mismatch found
            break;
        }
    }

    if(isPalindrome)
        cout << "Palindrome string";
    else
        cout << "Not Palindrome string";

    return 0;
}
