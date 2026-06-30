#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    int choice;

    do {
        cout << "\n--- Menu Driven String Operations ---\n";
        cout << "1. Enter Strings\n";
        cout << "2. Find Length\n";
        cout << "3. Reverse String\n";
        cout << "4. Concatenate Strings\n";
        cout << "5. Compare Strings\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter first string: ";
                cin >> str1;
                cout << "Enter second string: ";
                cin >> str2;
                break;

            case 2:
                cout << "Length of first string: " << str1.length() << endl;
                cout << "Length of second string: " << str2.length() << endl;
                break;

            case 3:
                cout << "Reverse of first string: ";
                for (int i = str1.length()-1; i >= 0; i--)
                    cout << str1[i];
                cout << endl;

                cout << "Reverse of second string: ";
                for (int i = str2.length()-1; i >= 0; i--)
                    cout << str2[i];
                cout << endl;
                break;

            case 4:
                cout << "Concatenated string: " << str1 + str2 << endl;
                break;

            case 5:
                if (str1 == str2)
                    cout << "Strings are equal.\n";
                else
                    cout << "Strings are not equal.\n";
                break;

            case 6:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}
