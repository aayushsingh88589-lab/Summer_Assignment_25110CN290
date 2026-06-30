#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
};

int main() {
    Book library[50];   // array to store up to 50 books
    int n = 0;          // current number of books
    int choice;

    do {
        cout << "\n--- Mini Library System ---\n";
        cout << "1. Add Book\n";
        cout << "2. Show Books\n";
        cout << "3. Search Book\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                if (n < 50) {
                    cout << "Enter Book ID: ";
                    cin >> library[n].id;
                    cout << "Enter Title: ";
                    cin >> library[n].title;
                    cout << "Enter Author: ";
                    cin >> library[n].author;
                    n++;
                    cout << "Book added successfully!\n";
                } else {
                    cout << "Library full! Cannot add more books.\n";
                }
                break;
            }

            case 2: {
                if (n == 0) {
                    cout << "No books in library.\n";
                } else {
                    cout << "\n--- Book Records ---\n";
                    for (int i = 0; i < n; i++) {
                        cout << "ID: " << library[i].id
                             << " | Title: " << library[i].title
                             << " | Author: " << library[i].author << endl;
                    }
                }
                break;
            }

            case 3: {
                int id;
                cout << "Enter Book ID to search: ";
                cin >> id;
                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (library[i].id == id) {
                        cout << "Found: ID " << library[i].id
                             << " | Title: " << library[i].title
                             << " | Author: " << library[i].author << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Book not found.\n";
                break;
            }

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
