#include <iostream>
#include <vector>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
};

int main() {
    vector<Book> library;
    int choice;

    do {
        cout << "\n--- Library Management System ---\n";
        cout << "1. Add Book\n2. Show Books\n3. Search Book\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            Book b;
            cout << "Enter Book ID: "; cin >> b.id;
            cout << "Enter Title: "; cin >> b.title;
            cout << "Enter Author: "; cin >> b.author;
            library.push_back(b);
        }
        else if (choice == 2) {
            for (auto &b : library) {
                cout << b.id << " " << b.title << " " << b.author << endl;
            }
        }
        else if (choice == 3) {
            int id;
            cout << "Enter Book ID to search: ";
            cin >> id;
            bool found = false;
            for (auto &b : library) {
                if (b.id == id) {
                    cout << "Found: " << b.id << " " << b.title << " " << b.author << endl;
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Book not found.\n";
        }
    } while (choice != 4);

    return 0;
}
