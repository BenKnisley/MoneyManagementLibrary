#include <iostream>
#include "money.h"
using namespace std;

int main(int argc, char* argv[]){

	// Create Accounts
	account* one = new account("000000000000000");
	account* two = new account("000000000000000");

	// Test zero cents
	transaction* test0 = new transaction(one, two, 0);

	// Test one cent
	transaction* test1 = new transaction(one, two, 1);

	// Test $100
	transaction* test2 = new transaction(one, two, 10000);

	// Test negitive
	transaction* test3 = new transaction(one, two, -1);


	return 0;
}
