#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0, choice, pos, val;

    do {
        cout << "\n--- Menu Driven Array Operations ---\n";
        cout << "1. Insert Element\n";
        cout << "2. Delete Element\n";
        cout << "3. Search Element\n";
        cout << "4. Display Array\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Insert
                cout << "Enter position (0-" << n << "): ";
                cin >> pos;
                cout << "Enter value: ";
                cin >> val;
                if (pos >= 0 && pos <= n) {
                    for (int i = n; i > pos; i--)
                        arr[i] = arr[i-1];
                    arr[pos] = val;
                    n++;
                    cout << "Inserted successfully!\n";
                } else {
                    cout << "Invalid position!\n";
                }
                break;

            case 2: // Delete
                cout << "Enter position (0-" << n-1 << "): ";
                cin >> pos;
                if (pos >= 0 && pos < n) {
                    for (int i = pos; i < n-1; i++)
                        arr[i] = arr[i+1];
                    n--;
                    cout << "Deleted successfully!\n";
                } else {
                    cout << "Invalid position!\n";
                }
                break;

            case 3: // Search
                cout << "Enter value to search: ";
                cin >> val;
                {
                    bool found = false;
                    for (int i = 0; i < n; i++) {
                        if (arr[i] == val) {
                            cout << "Found at position " << i << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) cout << "Not found!\n";
                }
                break;

            case 4: // Display
                cout << "Array elements: ";
                for (int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
