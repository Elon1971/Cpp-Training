#include <iostream>
#include <string>
#include "bank_account.h"
using namespace std;
        
bank_account() {
    cout << "Enter the customer name: ";
    cin >> name;
    cout << "Enter the account number: ";
    cin >> account_number;
    cout << "Enter the type of account you want to open: ";
    cin >> type_of_account;
    cout << "Enter the intial amount you want to deposit (Min 2000): ";
    cin >> balance;
    cin >> amou;
    while (amou < 2000) {
        cout << "Minimum amount required to maintain the account is 2000";
    }
    balance = amou;
}

void bank_account::display (string name, int balance) {
    cout << "Customer name is: " << name << "\n";
    cout << "Account Number is: " << balance << "\n";
}
    
void bank_account::withdraw (int amount) {
    cout << "Current balance is: " << balance << "\n";
    cout << "Withdrawed amount is: " << amount << "\n";
    balance = balance - amount;
    cout << "Total balance is: " << balance << "\n";
}
    
void bank_account::deposit (int amount) {
    cout << "Current balance is: " << balance << "\n";
    cout << "Deposited amount is: " << amount << "\n";
    balance = balance + amount;
    cout << "Total balance is: " << balance << "\n";
}