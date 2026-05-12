#include "ui.h"
#include <iostream>

namespace bankUI
{
    void showMainMenuUI()
    {
        std::cout << "==============================\n";
        std::cout << "      Bank Management\n";
        std::cout << "==============================\n";
        std::cout << "1. Create Account\n";
        std::cout << "2. Show Account\n";
        std::cout << "3. Deposit\n";
        std::cout << "4. Withdraw\n";
        std::cout << "5. Edit Account\n";
        std::cout << "6. Delete Account\n";
        std::cout << "7. Exit\n";
        std::cout << "Choose: ";
    }

    void showCreateAccountUI()
    {
        std::cout << "\n--- Create Account ---\n";
    }

    void showShowAccountUI(const Account& account)
    {
        std::cout << "\n--- Account Information ---\n";
        std::cout << "ID: " << account.getId() << '\n';
        std::cout << "Name: " << account.getName() << '\n';
        std::cout << "Family: " << account.getFamily() << '\n';
        std::cout << "Address: " << account.getAddress() << '\n';
        std::cout << "Phone: " << account.getPhone() << '\n';
        std::cout << "Balance: " << account.getBalance() << '\n';
    }

    void showDepositUI()
    {
        std::cout << "\n--- Deposit ---\n";
    }

    void showWithdrawUI()
    {
        std::cout << "\n--- Withdraw ---\n";
    }

    void showEditAccountUI()
    {
        std::cout << "\n--- Edit Account ---\n";
    }

    void showDeleteAccountUI()
    {
        std::cout << "\n--- Delete Account ---\n";
    }
}
