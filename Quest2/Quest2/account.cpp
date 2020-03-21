#include <iostream>
#include <string>
#include "account.h"
#include "interaction.h"

using namespace std;


account::account() {

}

account account::Transfer(int ID, float balance)
{
	return account();
}

account::account(int ID, int PIN, float balance) {

}

account account::Transfer(int ID, float balance)
{
	return account();
}

bool account::pay_in(float balance) {
	if (interaction::options) {
		float b;
		balance = b;
		return balance;
	} else {
		return false;
	};
}

bool account::pay_out(float balance) {
	if (interaction::options) {
		return balance;
	}
	else {
		return false;
	}
}

int ID;
int PIN;
float balance;

void account::setAccountID(int i) {
	cout << "Enter your account ID number: " << endl;
	cin >> ID;
	ID = i;
}

int account::getAccountID() {
	cout << "Account ID: " << ID;
	return ID;
}

void account::setAccountPIN(int p) {
	cout << "Enter your PIN number: " << endl;
	cin >> PIN;
	PIN = p;
}

void account::setAccountBalance(float b) {
	b = 0.0f;
	balance = b;
}

float account:: getAccountBalance() {
	cout << "Account Balance: $" << balance << endl;
	return balance;
}