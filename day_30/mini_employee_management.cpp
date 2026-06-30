#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    string dept;
    double salary;
};

int main() {
    Employee employees[50];   // array to store up to 50 employees
    int n = 0;                // current number of employees
    int choice;

    do {
        cout << "\n--- Mini Employee Management System ---\n";
        cout << "1. Add Employee\n";
        cout << "2. Show Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                if (n < 50) {
                    cout << "Enter Employee ID: ";
                    cin >> employees[n].id;
                    cout << "Enter Name: ";
                    cin >> employees[n].name;
                    cout << "Enter Department: ";
                    cin >> employees[n].dept;
                    cout << "Enter Salary: ";
                    cin >> employees[n].salary;
                    n++;
                    cout << "Employee added successfully!\n";
                } else {
                    cout << "Storage full! Cannot add more employees.\n";
                }
                break;
            }

            case 2: {
                if (n == 0) {
                    cout << "No employee records found.\n";
                } else {
                    cout << "\n--- Employee Records ---\n";
                    for (int i = 0; i < n; i++) {
                        cout << "ID: " << employees[i].id
                             << " | Name: " << employees[i].name
                             << " | Dept: " << employees[i].dept
                             << " | Salary: " << employees[i].salary << endl;
                    }
                }
                break;
            }

            case 3: {
                int id;
                cout << "Enter Employee ID to search: ";
                cin >> id;
                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (employees[i].id == id) {
                        cout << "Found: ID " << employees[i].id
                             << " | Name: " << employees[i].name
                             << " | Dept: " << employees[i].dept
                             << " | Salary: " << employees[i].salary << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Employee not found.\n";
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
