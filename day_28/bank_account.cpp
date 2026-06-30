#include <iostream>
#include <vector>
using namespace std;

struct Account {
    int accNo;
    string name;
    double balance;
};

int main() {
    vector<Account> accounts;
    int choice;

    do {
        cout << "\n--- Bank Account System ---\n";
        cout << "1. Create Account\n2. Deposit\n3. Withdraw\n4. Show Accounts\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            Account a;
            cout << "Enter Account No: "; cin >> a.accNo;
            cout << "Enter Name: "; cin >> a.name;
            a.balance = 0;
            accounts.push_back(a);
            cout << "Account created successfully!\n";
        }
        else if (choice == 2) {
            int acc; double amt;
            cout << "Enter Account No: "; cin >> acc;
            cout << "Enter Amount to Deposit: "; cin >> amt;
            for (auto &a : accounts) {
                if (a.accNo == acc) {
                    a.balance += amt;
                    cout << "Deposit successful! New Balance: " << a.balance << endl;
                }
            }
        }
        else if (choice == 3) {
            int acc; double amt;
            cout << "Enter Account No: "; cin >> acc;
            cout << "Enter Amount to Withdraw: "; cin >> amt;
            for (auto &a : accounts) {
                if (a.accNo == acc) {
                    if (amt <= a.balance) {
                        a.balance -= amt;
                        cout << "Withdrawal successful! New Balance: " << a.balance << endl;
                    } else {
                        cout << "Insufficient balance!\n";
                    }
                }
            }
        }
        else if (choice == 4) {
            for (auto &a : accounts) {
                cout << a.accNo << " " << a.name << " Balance: " << a.balance << endl;
            }
        }
    } while (choice != 5);

    return 0;
}
