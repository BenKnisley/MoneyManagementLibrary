#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include "transaction.h"
using namespace std;

class transaction;

class account{
    private:
        string AcctNumber;
        int balance = 0;
        void add(int sum);
        void rem(int sum);
    public:
        explicit account( string AcctNumber );
        int getBalance(void);
        void applyTranaction( transaction* trans );
        string getAcctNumber(void);
};


#endif
