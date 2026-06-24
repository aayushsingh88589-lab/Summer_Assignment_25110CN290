#include <iostream>
#include <cstring>   // for strlen
using namespace std;

int main() {
    char str[200];
    cout << "Enter a sentence: ";
    cin.getline(str, 200);   // input with spaces

    int words = 0;
    int inWord = 0;          // 0 = outside word, 1 = inside word

    for(int i = 0; i < strlen(str); i++) {
        if(str[i] != ' ' && inWord == 0) {
            words++;         // new word starts
            inWord = 1;
        }
        else if(str[i] == ' ') {
            inWord = 0;      // word ended
        }
    }

    cout << "Total words = " << words;
    return 0;
}
