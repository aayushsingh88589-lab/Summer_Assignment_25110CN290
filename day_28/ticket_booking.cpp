#include <iostream>
#include <vector>
using namespace std;

struct Ticket {
    int id;
    string name;
    string event;
    int seats;
};

int main() {
    vector<Ticket> bookings;
    int choice;

    do {
        cout << "\n--- Ticket Booking System ---\n";
        cout << "1. Book Ticket\n2. Show Bookings\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            Ticket t;
            cout << "Enter Booking ID: "; cin >> t.id;
            cout << "Enter Name: "; cin >> t.name;
            cout << "Enter Event: "; cin >> t.event;
            cout << "Enter Number of Seats: "; cin >> t.seats;
            bookings.push_back(t);
            cout << "Ticket booked successfully!\n";
        }
        else if (choice == 2) {
            if (bookings.empty()) {
                cout << "No bookings found.\n";
            } else {
                for (auto &t : bookings) {
                    cout << "ID: " << t.id << " | Name: " << t.name
                         << " | Event: " << t.event
                         << " | Seats: " << t.seats << endl;
                }
            }
        }
    } while (choice != 3);

    return 0;
}
