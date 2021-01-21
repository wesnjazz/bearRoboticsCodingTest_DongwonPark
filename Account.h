#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <vector>


enum AccountType
{
    check = 0,
    savings = 1
};

class Account
{
public:
    Account() { balance = 0; };
    Account(AccountType type) { this->type = type; };
    Account(int balance);
    ~Account() { delete this; };

    AccountType getAccountType() { return type; };
    std::vector<std::string> getTransactions() { return transactions; }

    int getBalance() { return balance; };
    int Deposit(int num);
    int Withdraw(int num);

private:
    std::vector<std::string> transactions;
    int balance;
    AccountType type;
};


#endif
