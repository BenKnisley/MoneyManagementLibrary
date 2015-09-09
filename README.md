C++ Money Management Library
===
### What This Library Does

This library is made to track the monetary balance in a set of accounts. It does
this with two types of objects. An account object, and a transaction object. The
account object holds information about an account such as account number, and
balance. The transaction objects holds details about a transaction between
accounts, such as debit and credit account, and sum being moved.


### How To Use
This library is very simple to use. To start include it into your project.

```c++
#include "money.h"
```

Create a few accounts. Pointers are used to address both accounts and
transactions.
```c++
## Create account to represent income
account* income = new account("000000000000000");

## Create account to represent spending
account* spending = new account("9999999999999999");

## Create account to represent checking account
account* checking = new account("789586555444564");

## Create account to represent saving account
account* saving = new account("7856658668286695");
```

Create a few transactions. All sums are in cents not dollars.
```c++
## Get payed $157.47 into saving
transaction* trans1 = new transaction(income, saving, 15747);

## Move $86.50 from saving to checking
transaction* trans2 = new transaction(saving, checking, 8650);

## Spend $75.51 from checking
transaction* trans3 = new transaction(checking, spending, 7551);
```

Apply each transaction to each accounts, if it does not pertain to that account
it is ignored. This will be expensive with a large amount of transactions.
```c++
income->applyTranaction( trans1 );
income->applyTranaction( trans2 );
income->applyTranaction( trans3 );

spending->applyTranaction( trans1 );
spending->applyTranaction( trans2 );
spending->applyTranaction( trans3 );

checking->applyTranaction( trans1 );
checking->applyTranaction( trans2 );
checking->applyTranaction( trans3 );

saving->applyTranaction( trans1 );
saving->applyTranaction( trans2 );
saving->applyTranaction( trans3 );
```

Get data out of accounts. The function convertCentsToDollars is used to convert
the int cent value stored in the account object into a double dollar value.
```c++
double savingBalance = convertCentsToDollars( income->getBalance() );
```
That's It! A very simple job done very simply.  
