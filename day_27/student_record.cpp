#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    string course;
    int age;
};

class StudentManagement {
private:
    vector<Student> records;

public:
    void addStudent() {
        Student s;
        cout << "\nEnter Roll No: ";
        cin >> s.rollNo;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, s.name);
        cout << "Enter Course: ";
        getline(cin, s.course);
        cout << "Enter Age: ";
        cin >> s.age;

        records.push_back(s);
        cout << "Student record added successfully!\n";
    }

    void displayStudents() {
        if (records.empty()) {
            cout << "\nNo records found.\n";
            return;
        }
        cout << "\n--- Student Records ---\n";
        for (auto &s : records) {
            cout << "Roll No: " << s.rollNo
                 << ", Name: " << s.name
                 << ", Course: " << s.course
                 << ", Age: " << s.age << endl;
        }
    }

    void searchStudent() {
        int roll;
        cout << "\nEnter Roll No to search: ";
        cin >> roll;
        for (auto &s : records) {
            if (s.rollNo == roll) {
                cout << "Record Found!\n";
                cout << "Roll No: " << s.rollNo
                     << ", Name: " << s.name
                     << ", Course: " << s.course
                     << ", Age: " << s.age << endl;
                return;
            }
        }
        cout << "No student found with Roll No " << roll << ".\n";
    }

    void deleteStudent() {
        int roll;
        cout << "\nEnter Roll No to delete: ";
        cin >> roll;
        for (auto it = records.begin(); it != records.end(); ++it) {
            if (it->rollNo == roll) {
                records.erase(it);
                cout << "Record deleted successfully!\n";
                return;
            }
        }
        cout << "No student found with Roll No " << roll << ".\n";
    }
};

int main() {
    StudentManagement sm;
    int choice;

    do {
        cout << "\n--- Student Record Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: sm.addStudent(); break;
            case 2: sm.displayStudents(); break;
            case 3: sm.searchStudent(); break;
            case 4: sm.deleteStudent(); break;
            case 5: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
