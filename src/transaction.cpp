#include <iostream>
#include "transaction.h"
using namespace std;

transaction::transaction(account* debit, account* credit, int sum){
    transaction::debitAccnt = debit;
    transaction::creditAccnt = credit;
    transaction::sum = sum;
}


string transaction::debitAcctNum(void){
    return debitAccnt->getAcctNumber();
}

string transaction::creditAcctNum(void){
    return creditAccnt->getAcctNumber();
}

int transaction::getSum(void){
    return sum;
}
