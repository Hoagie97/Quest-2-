#pragma once
#ifndef Database_H
#define Database_H
#include "account.h"
#include <vector>

class database {
public:
	database();

	void append(account const& a);

	bool find(account);

private:
	vector <account> accounts;
};

#endif

