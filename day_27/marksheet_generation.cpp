#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    int marks[3];   // marks for 3 subjects
    int total;
    float percentage;
};

int main() {
    Student s;
    cout << "Enter Roll No: ";
    cin >> s.rollNo;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, s.name);

    cout << "Enter marks for 3 subjects:\n";
    s.total = 0;
    for (int i = 0; i < 3; i++) {
        cout << "Subject " << i+1 << ": ";
        cin >> s.marks[i];
        s.total += s.marks[i];
    }

    s.percentage = s.total / 3.0;

    cout << "\n--- Marksheet ---\n";
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Name   : " << s.name << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Subject " << i+1 << " Marks: " << s.marks[i] << endl;
    }
    cout << "Total Marks : " << s.total << endl;
    cout << "Percentage  : " << s.percentage << "%" << endl;

    if (s.percentage >= 60)
        cout << "Result      : First Division\n";
    else if (s.percentage >= 45)
        cout << "Result      : Second Division\n";
    else if (s.percentage >= 33)
        cout << "Result      : Pass\n";
    else
        cout << "Result      : Fail\n";

    return 0;
}
