#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);

    int freq[256] = {0};   // track character occurrence
    char result[200];
    int j = 0;

    for(int i = 0; i < strlen(str); i++) {
        if(freq[(unsigned char)str[i]] == 0) {
            result[j++] = str[i];   // copy first occurrence
            freq[(unsigned char)str[i]] = 1;
        }
    }

    result[j] = '\0';   // end result string
    cout << "String without duplicates: " << result;
    return 0;
}
