#pragma once
#include <string>
using namespace std;

class BankAccount
{
private:
	string clientName;
	char currency;
	float balance;

public:
	void setClientName(string name);
	string getClientName();

	void setCurrency(char );
	string getCurrency();

	string getBalance();
	
	void PrintAccountInfo();

	void withdraw(string amount);
	void deposit(string amount);



};