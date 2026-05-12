#include "account.h"

Account::Account()
    : name(""),
    family(""),
    address(""),
    phone(""),
    id(0),
    balance(0.0)
{
}

Account::Account(const std::string& name,
    const std::string& family,
    const std::string& address,
    const std::string& phone,
    int id,
    double balance)
    : name(name),
    family(family),
    address(address),
    phone(phone),
    id(id),
    balance(balance >= 0.0 ? balance : 0.0)
{
}

const std::string& Account::getName() const
{
    return name;
}

const std::string& Account::getFamily() const
{
    return family;
}

const std::string& Account::getAddress() const
{
    return address;
}

const std::string& Account::getPhone() const
{
    return phone;
}

int Account::getId() const
{
    return id;
}

double Account::getBalance() const
{
    return balance;
}

void Account::setName(const std::string& name)
{
    this->name = name;
}

void Account::setFamily(const std::string& family)
{
    this->family = family;
}

void Account::setAddress(const std::string& address)
{
    this->address = address;
}

void Account::setPhone(const std::string& phone)
{
    this->phone = phone;
}

void Account::setId(int id)
{
    if (id >= 0)
        this->id = id;
}

void Account::setBalance(double balance)
{
    if (balance >= 0.0)
        this->balance = balance;
}

bool Account::deposit(double amount)
{
    if (amount <= 0.0)
        return false;

    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if (amount <= 0.0)
        return false;

    if (amount > balance)
        return false;

    balance -= amount;
    return true;
}
