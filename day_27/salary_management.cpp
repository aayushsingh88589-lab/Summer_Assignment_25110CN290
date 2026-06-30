#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

int main() {
    vector<Employee> employees;
    int choice;

    do {
        cout << "\n--- Salary Management System ---\n";
        cout << "1. Add Employee\n2. Show Employees\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            Employee e;
            cout << "Enter ID: "; cin >> e.id;
            cout << "Enter Name: "; cin >> e.name;
            cout << "Enter Salary: "; cin >> e.salary;
            employees.push_back(e);
        }
        else if (choice == 2) {
            for (auto &e : employees) {
                cout << e.id << " " << e.name << " " << e.salary << endl;
            }
        }
    } while (choice != 3);

    return 0;
}
