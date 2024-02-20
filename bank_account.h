#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <iostream>
#include <string>
#include "bank_account.h"
using namespace std;

class bank_account {
    private:
        string name;
        double account_number;
        string type_of_account;    
        int balance;
        int amount;
        int amou;      
    public:
        bank_account();
        void deposit(int amount);
        void withdraw(int amount);
        void display(string name, int balance);
};

#endif