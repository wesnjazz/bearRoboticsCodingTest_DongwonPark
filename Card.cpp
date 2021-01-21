#include "Card.h"


Card::Card()
{
    this->accountCheck = new Account(check);
    this->accountSavings = new Account(savings);
}


Card::~Card()
{
    delete this->accountCheck;
    delete this->accountSavings;
    this->defaultAccount = nullptr;
    delete this;
}


Card::Card(std::string name, std::string cardNumber, std::string expirationDate, std::string PIN)
{
    this->accountCheck = new Account(check);
    this->accountSavings = new Account(savings);
    this->name = name;
    this->cardNumber = cardNumber;
    this->expirationDate = expirationDate;
    this->PIN = PIN;
}


bool Card::checkPIN(std::string pin)
{
    return this->PIN == pin;
}


void Card::setDefaultAccount(AccountType type)
{
    if(type == check)
        this->defaultAccount = this->accountCheck;
    else if(type == savings)
        this->defaultAccount = this->accountSavings;
}

AccountType Card::getDefaultAccount()
{
    AccountType res = check;
    if(this->defaultAccount == this->accountCheck)
        res = check;
    else if(this->defaultAccount == this->accountSavings)
        res = savings;
    return res;
}


int Card::Deposit(int num)
{
    this->defaultAccount->Deposit(num);
    return this->getBalance();
}


int Card::Withdraw(int num)
{
    this->defaultAccount->Withdraw(num);
    return this->getBalance();
}
