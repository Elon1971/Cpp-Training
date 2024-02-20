#include <iostream>
#include <string>
#include "bank_account.h"
using namespace std;


int main() {
    char a;
    int b;
    
    bank_account cus1;
    
    cus1.display(cus1.name, cus1.account_number);
    
    while(a != 'q') {
        cout << "Press 'd' to depositt the money and 'w' to withdraw the money and 'q' when you are done with yoiur transactions\n";
        cout << "Enter your choice: ";
        cin >> a;
        if (a == 'd') {
            cout << "Enter the amount you want to deposit: ";
            cin >> b;
            cus1.deposit(b);
        }
        else if (a == 'w') {
            cout << "Enter the amount you want to withdraw: ";
            cin >> b;
            cus1.withdraw(b);
        }
    }
    
    cout << "!!Thanks For Being With Us!!";

    return 0;
}