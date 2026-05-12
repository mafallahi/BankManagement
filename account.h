#pragma once
#include <string>

class Account
{
private:
    std::string name;
    std::string family;
    std::string address;
    std::string phone;
    int id;
    double balance;

public:
    Account();
    Account(const std::string& name,
        const std::string& family,
        const std::string& address,
        const std::string& phone,
        int id,
        double balance = 0.0);

    // getters
    const std::string& getName() const;
    const std::string& getFamily() const;
    const std::string& getAddress() const;
    const std::string& getPhone() const;
    int getId() const;
    double getBalance() const;

    // setters
    void setName(const std::string& name);
    void setFamily(const std::string& family);
    void setAddress(const std::string& address);
    void setPhone(const std::string& phone);
    void setId(int id);
    void setBalance(double balance);

    // operations
    bool deposit(double amount);
    bool withdraw(double amount);
};
