#pragma once
#include <iostream>	
#include "account.h"

class Account{
public:
	explicit Account(const std::string name,
		const std::string family,
		const std::string address,
		const std::string phone,
		int id,
		double balance);
	
	Account();
	//name methods
	void setName(const std::string& name);
	std::string getName();

	//family methods
	void setFamily(const std::string& family);
	std::string getFamily();

	//address methods
	void setAddress(const std::string& address);
	std::string getAddress();
	//phone methods
	void setPhone(const std::string& phone);
	std::string getPhone();
	//id methods
	void setID(int id);
	int getID();
	void setBalance(const double& balance);
	double getBalance();
	~Account();

private:
	std::string name;
	std::string family;
	std::string address;
	std::string phone;
	int id;
	double balance;

};
