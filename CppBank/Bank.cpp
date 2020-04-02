#include "Bank.h"
#include "AccountNumberGenerator.h";

string Bank::newAccount(string name, string surname)
{
	string accountNumber = AccountNumberGenerator::generateAccountNumber();
	string savingAccountNumber = AccountNumberGenerator::generateAccountNumber();
	Client* client = new Client(name, surname, accountNumber, savingAccountNumber);
	clients.push_back(client);
	return string(accountNumber);
}

Client* Bank::getClientByAccountNumber(string accountNumber)
{
	
	for (size_t i = 0; i < clients.size(); i++)
	{
		if (strcmp(clients.at(i)->getAccountNumber().c_str(), accountNumber.c_str()) == 0)
			return clients[i];
	}
	return nullptr;

}
