#pragma once
#include <string>
using namespace std;

static class AccountNumberGenerator
{
public:
	static string generateAccountNumber();
	static bool validateAccountNumber(string accountNumber);
};

