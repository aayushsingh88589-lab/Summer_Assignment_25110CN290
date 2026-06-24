#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);   // input with spaces

    int freq[256] = {0};     
    char result = '\0';

    // traverse string and check first repeat
    for(int i = 0; i < strlen(str); i++) {
        freq[(unsigned char)str[i]]++;
        if(freq[(unsigned char)str[i]] == 2) {
            result = str[i];   // found repeating character
            break;
        }
    }

    if(result != '\0')
        cout << "First repeating character: " << result;
    else
        cout << "No repeating character found";

    return 0;
}
