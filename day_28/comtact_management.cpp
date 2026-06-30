#include <iostream>
#include <vector>
using namespace std;

struct Contact {
    int id;
    string name;
    string phone;
};

int main() {
    vector<Contact> contacts;
    int choice;

    do {
        cout << "\n--- Contact Management System ---\n";
        cout << "1. Add Contact\n2. Show Contacts\n3. Search Contact\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            Contact c;
            cout << "Enter Contact ID: "; cin >> c.id;
            cout << "Enter Name: "; cin >> c.name;
            cout << "Enter Phone: "; cin >> c.phone;
            contacts.push_back(c);
            cout << "Contact added successfully!\n";
        }
        else if (choice == 2) {
            if (contacts.empty()) {
                cout << "No contacts found.\n";
            } else {
                for (auto &c : contacts) {
                    cout << "ID: " << c.id << " | Name: " << c.name
                         << " | Phone: " << c.phone << endl;
                }
            }
        }
        else if (choice == 3) {
            string ph;
            cout << "Enter Phone to search: ";
            cin >> ph;
            bool found = false;
            for (auto &c : contacts) {
                if (c.phone == ph) {
                    cout << "Found: ID " << c.id << " | Name: " << c.name
                         << " | Phone: " << c.phone << endl;
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Contact not found.\n";
        }
    } while (choice != 4);

    return 0;
}
