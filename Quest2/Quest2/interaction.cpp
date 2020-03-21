#include <iostream>
#include <string>
#include "account.h"
#include "database.h";
#include "interaction.h";

using namespace std;

interaction::interaction() {

}

interaction::interaction(int acctNum, float amount, char type) {

}

int acctNum;
float amount;
char type;

void interaction::setAccountNum(int a) {
	account::getAccountID;
	acctNum = a;
}

int interaction::getAccountNum() {
	return acctNum;
}

void interaction::setAccountAmt(float b) {
	amount = b;
}

float interaction::getAccountAmt() {
	return amount;
}

void interaction::setInteractType(char c) {
	type = c;
}

char interaction::getInteractType() {
	return type;
}

void interaction::options(account accounts, int acctNum, float amount, char type) {
	int option;
	cout << "Enter 1 to make a deposit" << endl;
	cout << "Enter 2 to make a withdrawl" << endl;
	cout << "Enter 3 to check current balance" << endl;
	cin >> option;

	switch (option) {
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	default:
		cout << "Invalid Option Selected.." << endl;
		options(accounts, acctNum, amount, type);
	}
