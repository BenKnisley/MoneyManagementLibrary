#include <iostream>
#include "money.h"
using namespace std;

int main(int argc, char* argv[]){

	// Create Accounts
	account* income = new account("000000000000000");
	account* outgo = new account("9999999999999999");
	account* check1 = new account("789586555444564");
	account* save1 = new account("7856658668286695");

	// Create transactions
	transaction* trans1 = new transaction(income, check1, 15747);  // Get Payed $157.47 into checkings
	transaction* trans2 = new transaction(income, save1, 15747);   // Get Payed $157.47 into checkings
	transaction* trans3 = new transaction(check1, outgo, 7551);    // Spend $75.51 from checkings
	transaction* trans4 = new transaction(check1, outgo, 2199);    // Spend $21.99 from checkings
	transaction* trans5 = new transaction(save1, check1, 10000);   // Trans $100 into checkings from savings

	// Apply transactions to Accounts
	income->applyTranaction( trans1 );
	income->applyTranaction( trans2 );
	income->applyTranaction( trans3 );
	income->applyTranaction( trans4 );
	income->applyTranaction( trans5 );

	outgo->applyTranaction( trans1 );
	outgo->applyTranaction( trans2 );
	outgo->applyTranaction( trans3 );
	outgo->applyTranaction( trans4 );
	outgo->applyTranaction( trans5 );

	check1->applyTranaction( trans1 );
	check1->applyTranaction( trans2 );
	check1->applyTranaction( trans3 );
	check1->applyTranaction( trans4 );
	check1->applyTranaction( trans5 );

	save1->applyTranaction( trans1 );
	save1->applyTranaction( trans2 );
	save1->applyTranaction( trans3 );
	save1->applyTranaction( trans4 );
	save1->applyTranaction( trans5 );


	// Display Data
	cout << "Income: $"   <<  convertCentsToDollars( income->getBalance() )   << endl;
	cout << "Spending: $" <<  convertCentsToDollars( outgo->getBalance()  )   << endl;
	cout << "Checking: $" <<  convertCentsToDollars( check1->getBalance() )   << endl;
	cout << "Savings: $"  <<  convertCentsToDollars( save1->getBalance()  )   << endl;
	return 0;
}
