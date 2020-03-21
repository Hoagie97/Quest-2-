#pragma once
#ifndef Interaction_H
#define Interaction_H

using namespace std;

class interaction {
private:
	int accountNum;
	float accountAmt;
	char interactType;

public:
	interaction();
	interaction(int acctNum, float amount, char type);

	void setAccountNum(int a);
	void setAccountAmt(float b);
	void setInteractType(char c);

	int getAccountNum();
	float getAccountAmt();
	char getInteractType();

	void options(account accounts, int acctNum, float amount, char type);
};

#endif