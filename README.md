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
The ATM machine returns the result string for all operations so that you can print out the message.
```
cout << atm->insertCard(card) << endl;
```
