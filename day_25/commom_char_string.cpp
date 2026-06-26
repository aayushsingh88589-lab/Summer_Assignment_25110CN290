#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;   // input two strings

    int freq1[256] = {0}, freq2[256] = {0};

    // mark characters in first string
    for(int i=0; i<s1.size(); i++) freq1[(int)s1[i]] = 1;

    // mark characters in second string
    for(int j=0; j<s2.size(); j++) freq2[(int)s2[j]] = 1;

    cout << "Common characters: ";
    for(int k=0; k<256; k++) {
        if(freq1[k] && freq2[k]) cout << (char)k << " ";
    }
    return 0;
}
