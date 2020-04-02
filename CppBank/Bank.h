#pragma once

#include <string>
#include <vector>
#include "Client.h"
using namespace std;

class Bank
{
public:
	const string nazwaBanku = "Bank Millenium SA";
	const string kapital = "4 203 481 302 PLN";
	const string numer = " 500 600 700";
	const string email = "kontakt@bankmillenium.pl";
	const string strona = "bankmillenium.pl";

	Bank() {
		
	}

	string newAccount(string name, string surname);
	Client* getClientByAccountNumber(string accountNumber);

private:
	vector<Client*> clients;

};

