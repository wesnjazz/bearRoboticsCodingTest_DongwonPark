#include "Account.h"


int Account::Deposit(int num)
{
    this->balance += num;
    return this->getBalance();
}


int Account::Withdraw(int num)
{
    this->balance -= num;
    return this->getBalance();
}