#include "View.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>

void View::appStart()
{
	unsigned char x;
	do
	{
		clearScreen();
		cout << "[1] zaloz konto" << endl;
		cout << "[2] wplac pieniadze" << endl;
		cout << "[3] wyplac pieniadze" << endl;
		cout << "[4] sprawdz szczegoly konta glownego" << endl;
		cout << "[5] zamknij konto" << endl;
		cout << "[6] zaloz lokate" << endl;
		cout << "[7] sprawdz szczegoly lokaty" << endl;
		cout << "[8] zamknij wczesniej lokate" << endl;
		cout << "[9] zaloz konto oszczednosciowe" << endl;
		cout << "[10] przelej srodki na konto oszczednosciowe" << endl;
		cout << "[11] przelej srodki na konto glowne" << endl;
		cout << "[12] sprawdz szczegoly stan konta oszczednosciowego" << endl;
		cout << "[13] zamknij konto oszczednosciowe" << endl;
		cout << "[14] skontaktuj sie z nami" << endl;
		cout << "[15] KONIEC" << endl << endl;
		cout << "Wybierz, co chcesz zrobic: ";
		x = _getch();
		x -= '0';
		system("cls");
		switch (x)
		{
		case 1:
			newAccount();
			break;
		/*case 2:
			wplata();
			break;
		case 3:
			wyplata();
			break;
		case 4:
			stanKonta();
			break;
		case 5:
			zamknijKonto();
			break;
		case 6:
			zalozLokate();
			break;
		case 7:
			stanLokaty();
			break;
		case 8:
			zamknijLokate();
			break;
		case 9:
			zalozOszczednosciowe();
			break;
		case 10:
			przelejNaOszczednosci();
			break;
		case 11:
			przelejNaGlowne();
			break;
		case 12:
			stanKontaOszczednosciowego();
			break;
		case 13:
			zamknijOszczednosciowe();
			break;
		case 14:
			kontakt();
			break;*/
		}

	} while (x != 15);
}

void View::newAccount()
{
	string name, surname;
	
	clearScreen();
	cout << "Podaj imie: ";
	getline(cin, name);
	cout << "Podaj nazwisko: ";
	getline(cin, surname);
	string newAccountNumber = bank.newAccount(name, surname);
	Client* newClient = bank.getClientByAccountNumber(newAccountNumber);
	if (newClient != nullptr)
	{
		viewClient(newClient);
		system("PAUSE");
	}
		
	
}

void View::clearScreen()
{
	system("CLS");
	// cout << endl << endl;
}

void View::viewClient(Client * client)
{
	clearScreen();
	cout << "Imie: " << client->getName() << endl
		<< "Nazwisko: " << client->getSurname() << endl
		<< "Numer Rachunku: " << client->getAccountNumber() << endl
		<< "Numer Rachunku oszczednosciowego: " << client->getSavingAccountNumber() << endl;
}
