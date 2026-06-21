#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);  // input with spaces

    int vowels = 0, consonants = 0;
    int i = 0;

    while(str[i] != '\0') {
        char ch = tolower(str[i]); // convert to lowercase
        if(ch >= 'a' && ch <= 'z') { // check if alphabet
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;

    return 0;
}
