#include <iostream>
#include "money.h"
using namespace std;

double convertCentsToDollars( int cents ){
    return ( (float) cents / 100 );
}

double convertDollarsToCents( int dollars ){
    return ( dollars * 100 );
}
