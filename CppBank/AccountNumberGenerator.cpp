#include "AccountNumberGenerator.h"
#include <random>
using namespace std;

default_random_engine generator;
uniform_int_distribution<int> range(0, 9);

string AccountNumberGenerator::generateAccountNumber()
{
	char newAccountNumber[27];
	for (int i = 0; i < 26; i++)
	{
		newAccountNumber[i] = range(generator) + '0';
	}
	newAccountNumber[26] = 0;
	return string(newAccountNumber);
	// TODO: Add checksum calculator here 
	// Info: https://pl.wikipedia.org/wiki/Mi%C4%99dzynarodowy_numer_rachunku_bankowego
	
}

bool AccountNumberGenerator::validateAccountNumber(string accountNumber)
{
	// TODO: Validate number (checksum, length etc);
	// https://pl.wikipedia.org/wiki/Mi%C4%99dzynarodowy_numer_rachunku_bankowego
	return true;
}
