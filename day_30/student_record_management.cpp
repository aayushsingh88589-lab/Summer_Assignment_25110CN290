#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    string course;
    int marks;
};

int main() {
    Student students[50];   // array to store up to 50 students
    int n = 0;              // current number of students
    int choice;

    do {
        cout << "\n--- Student Record System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Show Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                if (n < 50) {
                    cout << "Enter Roll No: ";
                    cin >> students[n].rollNo;
                    cout << "Enter Name: ";
                    cin >> students[n].name;
                    cout << "Enter Course: ";
                    cin >> students[n].course;
                    cout << "Enter Marks: ";
                    cin >> students[n].marks;
                    n++;
                    cout << "Student added successfully!\n";
                } else {
                    cout << "Array full! Cannot add more students.\n";
                }
                break;
            }

            case 2: {
                if (n == 0) {
                    cout << "No records found.\n";
                } else {
                    cout << "\n--- Student Records ---\n";
                    for (int i = 0; i < n; i++) {
                        cout << "Roll No: " << students[i].rollNo
                             << " | Name: " << students[i].name
                             << " | Course: " << students[i].course
                             << " | Marks: " << students[i].marks << endl;
                    }
                }
                break;
            }

            case 3: {
                int roll;
                cout << "Enter Roll No to search: ";
                cin >> roll;
                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (students[i].rollNo == roll) {
                        cout << "Found: Roll No " << students[i].rollNo
                             << " | Name: " << students[i].name
                             << " | Course: " << students[i].course
                             << " | Marks: " << students[i].marks << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Student not found.\n";
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
