#include <iostream>
#include "ATM.h"
#include "Account.h"
#include "Card.h"


using namespace std;

int main(int argc, char** argv)
{
    cout << "Simple ATM" << endl << endl;

    Card* card = new Card("Dongwon Park", "1234 5678 9012 3456", "01/31/21", "0000");
    ATM* atm = new ATM();

    cout << atm->insertCard(card) << endl << endl;

    cout << atm->checkPIN(card, "1234") << endl << endl;

    cout << atm->selectAccount(card, check) << endl;
    cout << atm->getDefaultAccount(card) << endl;
    cout << atm->getBasicInfos(card) << endl;
    cout << atm->getBalance(card) << endl;
    cout << atm->deposit(card, 300) << endl << endl;

    cout << atm->checkPIN(card, "0000") << endl << endl;

    cout << atm->selectAccount(card, check) << endl;
    cout << atm->getDefaultAccount(card) << endl << endl;

    cout << atm->selectAccount(card, savings) << endl;
    cout << atm->getDefaultAccount(card) << endl << endl;

    cout << atm->selectAccount(card, check) << endl;
    cout << atm->getDefaultAccount(card) << endl << endl;

    cout << atm->getBasicInfos(card) << endl << endl;

    cout << atm->getBalance(card) << endl;
    cout << atm->deposit(card, 300) << endl;
    cout << atm->getBalance(card) << endl;
    cout << atm->withdraw(card, 34) << endl;
    cout << atm->getBalance(card) << endl;
    cout << atm->withdraw(card, 500) << endl;
    cout << atm->getBalance(card) << endl;
    cout << atm->deposit(card, 82000) << endl;
    cout << atm->getBalance(card) << endl;
return 0;
}