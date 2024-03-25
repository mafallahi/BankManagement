#include <iostream>	
#include "account.h"

	 Account::Account(const std::string name,
					 const std::string family,
					 const std::string address,
					 const std::string phone,
					 int id,
					 double balance) 
	{
		setName(name);
		setFamily(family);
		setAddress(address);
		setPhone(phone);
		setID(id);
		setBalance(balance);
	}
	Account::Account() {
		id = 0;
		balance = 0;
	}
	Account::~Account(){}
	//name methods
	void Account::setName(const std::string& name) {
		this->name = name;
	}
	std::string Account::getName(){
		return name;
	}
	//family methods
	void Account::setFamily(const std::string& family) {
		this->family = family;
	}
	std::string Account::getFamily() {
		return family;
	}
	//address methods
	void Account::setAddress(const std::string& address) {
		this->address = address;
	}
	std::string Account::getAddress() {
		return address;
	}
	//phone methods
	void Account::setPhone(const std::string& phone) {
		this->phone = phone;
	}
	std::string Account::getPhone() {
		return phone;
	}
	//id methods
	void Account::setID(int id) {
		this->id = id;
	}
	int Account::getID() {
		return id;
	}
	void Account::setBalance(const double& balance) {
		this->balance = balance;
	}
	double Account::getBalance() {
		return balance;
	}
	void Account::withdrawBalance(const double& balance) {
		this->balance -= balance;
	}

