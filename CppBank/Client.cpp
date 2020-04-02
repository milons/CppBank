#include "Client.h"

string Client::getAccountNumber()
{
	return string(accountNumber);
}

string Client::getSavingAccountNumber()
{
	return string(savingAccountNumber);
}

string Client::getName()
{
	return name;
}

string Client::getSurname()
{
	return surname;
}

Client::Client(string name, string surname, string accountNumber, string savingAccountNumber)
{
	this->name = name;
	this->surname = surname;
	this->accountNumber = accountNumber;
	this->savingAccountNumber = savingAccountNumber;
}