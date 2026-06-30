#include <iostream>
#include <vector>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    double price;
};

int main() {
    vector<Item> inventory;
    int choice;

    do {
        cout << "\n--- Inventory Management System ---\n";
        cout << "1. Add Item\n2. Show Items\n3. Search Item\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            Item it;
            cout << "Enter Item ID: "; cin >> it.id;
            cout << "Enter Name: "; cin >> it.name;
            cout << "Enter Quantity: "; cin >> it.quantity;
            cout << "Enter Price: "; cin >> it.price;
            inventory.push_back(it);
            cout << "Item added successfully!\n";
        }
        else if (choice == 2) {
            if (inventory.empty()) {
                cout << "No items in inventory.\n";
            } else {
                for (auto &it : inventory) {
                    cout << "ID: " << it.id << " | Name: " << it.name
                         << " | Qty: " << it.quantity
                         << " | Price: " << it.price << endl;
                }
            }
        }
        else if (choice == 3) {
            int id;
            cout << "Enter Item ID to search: ";
            cin >> id;
            bool found = false;
            for (auto &it : inventory) {
                if (it.id == id) {
                    cout << "Found: ID " << it.id << " | Name: " << it.name
                         << " | Qty: " << it.quantity
                         << " | Price: " << it.price << endl;
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Item not found.\n";
        }
    } while (choice != 4);

    return 0;
}
