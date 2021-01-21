#ifndef CARD_H
#define CARD_H
#include "Account.h"

class Card
{
private:
    Account* accountCheck;
    Account* accountSavings;
    Account* defaultAccount;
    std::string name;
    std::string cardNumber;
    std::string expirationDate;
    std::string PIN;
public:
    Card();
    ~Card();
    Card(std::string name, std::string cardNumber, std::string expirationDate, std::string PIN);

    void setDefaultAccount(AccountType type);
    void setName(std::string name) { name = name; };
    void setCardNumber(std::string cardNumber) { cardNumber = cardNumber; };
    void setExpirationDate(std::string expirationDate) { expirationDate = expirationDate; };
    void setPIN(std::string PIN) { PIN = PIN; };
    bool checkPIN(std::string pin);
    AccountType getDefaultAccount();
    std::string getName() { return name; };
    std::string getCardNumber() { return cardNumber; };
    std::string getExpirationDate() { return expirationDate; };
    std::string getPIN() { return PIN; };
    int getBalance() { return this->defaultAccount->getBalance(); };
    int Deposit(int num);
    int Withdraw(int num);

};


#endif