# bearRoboticsCodingTest_DongwonPark

## How to clone the project
```
git clone https://github.com/wesnjazz/bearRoboticsCodingTest_DongwonPark.git
```

## How to build
```
g++ main.cpp ATM.cpp Account.cpp Card.cpp -o ATM.exe
```

## How to run tests
```
ATM.exe
```
Then the main() will perform tests.


## How to create test
In main.cpp, modify:
### 1. Create a card
```
Card* card = new Card("Name", "Card number", "Exp date", "PIN");

ex)
Card* card = new Card("Dongwon Park", "1234 5678 9012 3456", "01/31/21", "0000");
```
### 2. Create an ATM machine
```
ATM* atm = new ATM();
```
### 3. Insert the card
```
atm->insertCard(card);
```
(optional) To print the status message:
```
cout << atm->insertCard(card);
```

The ATM machine returns the result string for all operations so that you can print out the message.
```
cout << atm->insertCard(card) << endl;
```
### 4. Check PIN
```
atm->checkPIN(card, "PIN");
```
** If PIN is not matched, then all operations cannot be excuted and will print the error message **
```
Invalid PIN.

[-] Error. Invalid PIN. Cannot proceed the operation [selectAccount].
[-] Error. Invalid PIN. Cannot proceed the operation [getDefaultAccount].
[-] Error. Invalid PIN. Cannot proceed the operation [getBasicInfos].
[-] Error. Invalid PIN. Cannot proceed the operation [getBalance].
[-] Error. Invalid PIN. Cannot proceed the operation [deposit].
```
** If PIN is matched, then all set. **
```
Corrent PIN.
```

### 5. Select Account (Either Check or Savings)
```
atm->selectAccount(card, check);
atm->selectAccount(card, savings);
```

### 6. Check the current default account
```
atm->getDefaultAccount(card);
```

### 7. Get basic infos of the card
```
cout << atm->getBasicInfos(card);
Name: Dongwon Park
Card number: 1234 5678 9012 3456
Expiration Date: 01/31/21
```

