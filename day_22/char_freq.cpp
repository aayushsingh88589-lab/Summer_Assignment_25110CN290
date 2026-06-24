#include <iostream>
#include <cstring>   // for strlen
using namespace std;

int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);   // input with spaces

    int freq[256] = {0};     // frequency array for all ASCII chars

    // count frequency of each character
    for(int i = 0; i < strlen(str); i++) {
        freq[(unsigned char)str[i]]++;
    }

    // print frequency only for characters that appear
    cout << "Character frequencies:\n";
    for(int i = 0; i < 256; i++) {
        if(freq[i] > 0) {
            cout << (char)i << " : " << freq[i] << endl;
        }
    }

    return 0;
}
