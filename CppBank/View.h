#pragma once
#include "Bank.h"
using namespace std;
class View
{
public:
	void appStart();
	void newAccount();
	void clearScreen();
	void viewClient(Client* client);

private:
	Bank bank;
};

