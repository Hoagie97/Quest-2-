#include <iostream>
#include <string>
#include <vector>

#include "account.h";
#include "database.h";
#include "interaction.h";

using namespace std;

int main() {
	interaction menu();
	interaction options();

	cout << "---Welcome---" << endl;

	void account::setAccountID(int i) {
		cout << "Enter your account ID number: " << endl;
		cin >> ID;
		ID = i;
	}

	return 0;
}
