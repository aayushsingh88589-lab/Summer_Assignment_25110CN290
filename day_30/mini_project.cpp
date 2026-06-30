#include <iostream>
#include <string>
using namespace std;

// Structure to hold student data
struct Student {
    int rollNo;
    string name;
    float marks;
};

// Function to add a student
void addStudent(Student students[], int &count, int rollNo, string name, float marks) {
    students[count].rollNo = rollNo;
    students[count].name = name;
    students[count].marks = marks;
    count++;
}

// Function to display all students
void displayStudents(Student students[], int count) {
    cout << "\n--- Student Records ---\n";
    for (int i = 0; i < count; i++) {
        cout << "Roll No: " << students[i].rollNo
             << " | Name: " << students[i].name
             << " | Marks: " << students[i].marks << endl;
    }
}

// Function to search student by roll number
void searchStudent(Student students[], int count, int rollNo) {
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == rollNo) {
            cout << "\nStudent Found!\n";
            cout << "Roll No: " << students[i].rollNo
                 << " | Name: " << students[i].name
                 << " | Marks: " << students[i].marks << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "\nStudent with Roll No " << rollNo << " not found.\n";
    }
}

// Function to calculate average marks
void calculateAverage(Student students[], int count) {
    float sum = 0;
    for (int i = 0; i < count; i++) {
        sum += students[i].marks;
    }
    cout << "\nAverage Marks: " << (count > 0 ? sum / count : 0) << endl;
}

int main() {
    Student students[100]; // Array of students
    int count = 0;         // Number of students

    int choice;
    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Calculate Average Marks\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int rollNo;
            string name;
            float marks;
            cout << "Enter Roll No: ";
            cin >> rollNo;
            cin.ignore(); // To handle newline after integer input
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Marks: ";
            cin >> marks;
            addStudent(students, count, rollNo, name, marks);
        } else if (choice == 2) {
            displayStudents(students, count);
        } else if (choice == 3) {
            int rollNo;
            cout << "Enter Roll No to search: ";
            cin >> rollNo;
            searchStudent(students, count, rollNo);
        } else if (choice == 4) {
            calculateAverage(students, count);
        }
    } while (choice != 5);

    cout << "\nExiting program... Goodbye!\n";
    return 0;
}
