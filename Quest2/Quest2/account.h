#pragma once
#ifndef Account_H
#define Account_H

using namespace std;

class account {
private:
	int accountID; //Account ID number
	int accountPIN; //Account PIN number
	float accountBalance; //Account current balance

public:
	account(); //default constructor
	account(int ID, int PIN, float balance); //parameter constructor
	account Transfer(int ID, float balance);

	void setAccountID(int i);
	void setAccountPIN(int p);
	void setAccountBalance(float b);


	int getAccountID();
	float getAccountBalance();
	bool pay_in(float balance);
	bool pay_out(float balance);

	struct Account {

	};

};

#endif