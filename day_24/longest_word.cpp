#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    int maxLen = 0, currLen = 0;
    char longest[200], word[200];
    int j = 0;

    for(int i = 0; i <= strlen(str); i++) {
        if(str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];   // build current word
            currLen++;
        }
        else {
            word[j] = '\0';       // end current word
            if(currLen > maxLen) {
                maxLen = currLen; // update longest
                strcpy(longest, word);
            }
            j = 0; currLen = 0;   // reset for next word
        }
    }

    cout << "Longest word: " << longest 
         << " (length " << maxLen << ")";
    return 0;
}
