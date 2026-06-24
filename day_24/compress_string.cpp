#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);

    char result[400];
    int j = 0;

    for(int i = 0; i < strlen(str); i++) {
        result[j++] = str[i];   
        int count = 1;

        while(i + 1 < strlen(str) && str[i] == str[i + 1]) {
            count++;  
            i++;
        }

        if(count > 1) {
            char num[10];
            sprintf(num, "%d", count);   // convert count to string
            for(int k = 0; num[k] != '\0'; k++) {
                result[j++] = num[k];   // append count
            }
        }
    }

    result[j] = '\0';   // end result string
    cout << "Compressed string: " << result;
    return 0;
}
