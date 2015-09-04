#include <iostream>
#include "account.h"
using namespace std;


account::account( string AcctNumber ){
    account::AcctNumber = AcctNumber;
}

void account::add(int sum){
    balance += sum;
}

void account::rem(int sum){
    balance -= sum;
}

int account::getBalance(void){
    return balance;
}

void account::applyTranaction( transaction* trans ){

    if( trans->debitAcctNum() == getAcctNumber() ){
        rem( trans->getSum() );
    }

    if( trans->creditAcctNum() == getAcctNumber() ){
        add( trans->getSum() );
    }

}

string account::getAcctNumber(void){
    return AcctNumber;
}
