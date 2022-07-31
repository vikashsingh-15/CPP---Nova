#include<iostream>
#include<cstring>
#include"bitmap.h"
using namespace std;

Account::Account()
{
	accno = 0;
	name[0] = '\0';
	balance = 0;
}


Account::Account(int acc, const char *n, double bal)
{
	accno = acc;
	strcpy(name, n);
	balance = bal;
}

void Account::accept()
{
	cin >> accno >> name >> balance;
}


void Account::display()
{
	cout << accno << " " << name << " " << balance;
}

void Account::deposite(int amount)
{
	balance += amount;
}

void Account::withdraw(int amount)
{
	balance -= amount;
}

int Account::getAccno()
{
	return accno;
}
	
char* Account::getName()
{
	return name;
}

double Account::getBalance()
{
	return balance;
}

void Account::setAccno(int id)
{
	accno=id;
}

void Account::setName(const char *n)
{
	strcpy(name,n);
}

void Account::setBalance(double bal)
{
	balance=bal;
}

bool Account::searchAccountById(Account *accounts, int size, int id)
{
	bool status=false;
	
	for (int i = 0; i < size; i++)
	{
		if (accounts[i].getAccno() == id)
			status = true;
	}
	
	return status;
}

double Account::getHighestBalance(Account *accounts, int size)
{
	int i, highestBal;
	
	if (size > 0)
	{
		highestBal = accounts[0].getBalance();
	}

	for ( i = 1; i < size; i++)
	{
		double temp = accounts[i].getBalance();
		if (temp > highestBal)
			highestBal = temp;
	}
	
	return highestBal;
}


double Account::getLowestBalance(Account *accounts, int size)
{
	int i, lowestBal;
	
	if (size > 0)
	{
		lowestBal = accounts[0].getBalance();
	}

	for ( i = 1; i < size; i++)
	{
		double temp = accounts[i].getBalance();
		if (temp < lowestBal)
			lowestBal = temp;
	}
	return lowestBal;
}















