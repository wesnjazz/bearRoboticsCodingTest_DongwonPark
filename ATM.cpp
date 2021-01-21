#include "ATM.h"
#include "Account.h"
#include "Card.h"


std::string ATM::insertCard(Card* card)
{
    insertedCard = card;
    return "The card was inserted successfully.";
}

std::string ATM::checkPIN(Card* card, std::string pin)
{
    bool isCorrectPIN = card->checkPIN(pin);
    std::string res = "";
    if(isCorrectPIN){
        res = "Corrent PIN.";
        isPINcorrect = true;
    } else {
        res = "Invalid PIN.";
        isPINcorrect = false;
    }
    return res;
}

bool ATM::getPINStatus()
{
    return isPINcorrect;
}

std::string ATM::PINErrorMessage(std::string operation)
{
    return "[-] Error. Invalid PIN. Cannot proceed the operation [" + operation + "].";
}

std::string ATM::selectAccount(Card* card, AccountType type)
{
    if(!getPINStatus())
        return PINErrorMessage("selectAccount");
    card->setDefaultAccount(type);
    std::string res = "";
    if(type == check)
        res ="Check account was selected.";
    else if(type == savings)
        res ="Savings account was selected.";
    return res;
}

std::string ATM::getDefaultAccount(Card* card)
{
    if(!getPINStatus())
        return PINErrorMessage("getDefaultAccount");
    std::string res = "";
    if(card->getDefaultAccount() == check)
        res = "DefaultAccount: Check";
    else if(card->getDefaultAccount() == savings)
        res = "DefaultAccount: Savings";
    return res;
}

std::string ATM::getBasicInfos(Card* card)
{
    if(!getPINStatus())
        return PINErrorMessage("getBasicInfos");
    return "Name: " + card->getName() + "\n" +
           "Card number: " + card->getCardNumber() + "\n" + 
           "Expiration Date: " + card->getExpirationDate() + "\n";
}

std::string ATM::getBalance(Card* card)
{
    if(!getPINStatus())
        return PINErrorMessage("getBalance");
    std::string res = "Current Balance: $" + 
                      std::to_string(card->getBalance()) +
                      "\n";
    return res;
}

std::string ATM::deposit(Card* card, int num)
{
    if(!getPINStatus())
        return PINErrorMessage("deposit");
    card->Deposit(num);
    std::string res = "$" + 
                      std::to_string(num) + 
                      " was deposited.\n";
    return res;
}

std::string ATM::withdraw(Card* card, int num)
{
    if(!getPINStatus())
        return PINErrorMessage("withdraw");
    card->Withdraw(num);
    std::string res = "$" + 
                      std::to_string(num) + 
                      " was withdrawed.\n";
    return res;
}
