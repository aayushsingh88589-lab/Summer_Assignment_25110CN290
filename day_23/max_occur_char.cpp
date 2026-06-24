#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);   // input with spaces

    int freq[256] = {0};     // frequency array for ASCII chars

    // count frequency of each character
    for(int i = 0; i < strlen(str); i++) {
        freq[(unsigned char)str[i]]++;
    }

    // find character with maximum frequency
    int maxFreq = 0;
    char maxChar = '\0';
    for(int i = 0; i < 256; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    if(maxChar != '\0')
        cout << "Maximum occurring character: " << maxChar 
             << " (appears " << maxFreq << " times)";
    else
        cout << "No characters found";

    return 0;
}
