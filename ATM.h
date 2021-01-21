#ifndef ATM_H
#define ATM_H
#include "Account.h"
#include "Card.h"


class ATM
{
public:
    ATM() { isPINcorrect = false; };
    ~ATM() { insertedCard = nullptr; delete this; }

    std::string insertCard(Card* card);

    std::string checkPIN(Card* card, std::string pin);
    bool getPINStatus();
    std::string PINErrorMessage(std::string operation);

    std::string selectAccount(Card* card, AccountType type);
    std::string getDefaultAccount(Card* card);

    std::string getBasicInfos(Card* card);

    std::string getBalance(Card* card);
    std::string deposit(Card* card, int num);
    std::string withdraw(Card* card, int num);
private:
    Card* insertedCard;
    bool isPINcorrect;
};


#endif