#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);

    int freq[256] = {0};  
    // count frequency of each character
    for(int i = 0; i < strlen(str); i++) {
        freq[(unsigned char)str[i]]++;
    }

    // find first non-repeating character
    char result = '\0';
    for(int i = 0; i < strlen(str); i++) {
        if(freq[(unsigned char)str[i]] == 1) {
            result = str[i];
            break;
        }
    }

    if(result != '\0')
        cout << "First non-repeating character: " << result;
    else
        cout << "No non-repeating character found";

    return 0;
}
