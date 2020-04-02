#pragma once
#include <string>
using namespace std;

class Client
{
public:
	string getAccountNumber();
	string getSavingAccountNumber();
	string getName();
	string getSurname();
	Client(string name, string surname, string accountNumber, string savingAccountNumber);


private:
	string name;
	string surname;
	double accountAmount;
	double savingAccountAmount;
	string accountNumber;
	string savingAccountNumber;

};

