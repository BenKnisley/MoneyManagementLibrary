#ifndef TRANSACTION_H
#define TRANSACTION_H


#include <iostream>
#include "account.h"
using namespace std;

class account;

class transaction{
    private:
        account* debitAccnt;
        account* creditAccnt;
        int sum;
    public:
        explicit transaction(account* debit, account* credit, int sum);
        string debitAcctNum(void);
        string creditAcctNum(void);
        int getSum(void);
};

#endif
