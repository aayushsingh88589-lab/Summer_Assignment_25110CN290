#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);

    // if lengths differ, not rotation
    if(strlen(str1) != strlen(str2)) {
        cout << "Not Rotation strings";
        return 0;
    }

    // make a new string by concatenating str1 with itself
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);

    // check if str2 is substring of temp
    if(strstr(temp, str2) != NULL)
        cout << "Strings are Rotations";
    else
        cout << "Not Rotation strings";

    return 0;
}
