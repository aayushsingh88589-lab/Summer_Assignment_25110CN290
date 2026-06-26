#include <iostream>
using namespace std;

int main() {
    int balance = 1000;  // initial balance
    int choice, amount;

    while(true) {
        cout << "\n--- ATM Menu ---\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Your balance is: " << balance << endl;
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Deposited successfully. New balance: " << balance << endl;
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if(amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawn successfully. New balance: " << balance << endl;
                } else {
                    cout << "Insufficient balance!" << endl;
                }
                break;
            case 4:
                cout << "Thank you for using the ATM." << endl;
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }
}
