#include <iostream>
#include "transaction.h"
#include "account.h"
#ifndef MONEY_H
#define MONEY_H
using namespace std;

double convertCentsToDollars( int cents ){
    return ( (float) cents / 100 );
}


#endif
