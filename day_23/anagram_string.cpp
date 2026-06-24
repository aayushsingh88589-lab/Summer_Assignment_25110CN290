#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);

    // if lengths differ, not anagram
    if(strlen(str1) != strlen(str2)) {
        cout << "Not Anagram strings";
        return 0;
    }

    int freq[256] = {0};   

    // increase count for str1, decrease for str2
    for(int i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
    }
    for(int i = 0; str2[i] != '\0'; i++) {
        freq[(unsigned char)str2[i]]--;
    }

    // check if all counts are zero
    bool isAnagram = true;
    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            isAnagram = false;
            break;
        }
    }

    if(isAnagram)
        cout << "Anagram strings";
    else
        cout << "Not Anagram strings";

    return 0;
}
