#include <iostream>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a string: ";

    // read full sentence including spaces
    int i = 0;
    char ch;
    while((ch = cin.get()) != '\n') {   // stop at Enter key
        str[i++] = ch;
    }
    str[i] = '\0';   // end string

    char result[200];
    int j = 0;

    // copy only non-space characters
    for(int k = 0; str[k] != '\0'; k++) {
        if(str[k] != ' ') {
            result[j++] = str[k];
        }
    }
    result[j] = '\0';   // end result string

    cout << "String without spaces: " << result;
    return 0;
}
