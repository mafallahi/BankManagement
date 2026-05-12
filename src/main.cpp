#include <iostream>
#include <limits>
#include "account.h"
#include "ui.h"
#include "clearScreen.h"

bool readInt(int& value)
{
    if (!(std::cin >> value))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return false;
    }
    return true;
}

bool readDouble(double& value)
{
    if (!(std::cin >> value))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return false;
    }
    return true;
}

int main()
{
    Account account;
    bool hasAccount = false;
    bool running = true;

    while (running)
    {
        ClearConsoleScreen::Clear();
        bankUI::showMainMenuUI();

        int choice;
        if (!readInt(choice))
        {
            std::cout << "Invalid input. Press Enter...\n";
            std::cin.get();
            std::cin.get();
            continue;
        }

        switch (choice)
        {
        case 1:
        {
            ClearConsoleScreen::Clear();
            bankUI::showCreateAccountUI();

            std::string name, family, address, phone;
            int id;
            double balance;

            std::cout << "Name: ";
            std::cin >> std::ws;
            std::getline(std::cin, name);

            std::cout << "Family: ";
            std::getline(std::cin, family);

            std::cout << "Address: ";
            std::getline(std::cin, address);

            std::cout << "Phone: ";
            std::getline(std::cin, phone);

            std::cout << "ID: ";
            if (!readInt(id))
            {
                std::cout << "Invalid ID.\n";
                break;
            }

            std::cout << "Initial balance: ";
            if (!readDouble(balance))
            {
                std::cout << "Invalid balance.\n";
                break;
            }

            account = Account(name, family, address, phone, id, balance);
            hasAccount = true;

            std::cout << "Account created successfully.\n";
            break;
        }

        case 2:
        {
            ClearConsoleScreen::Clear();
            if (!hasAccount)
            {
                std::cout << "No account found.\n";
                break;
            }

            bankUI::showShowAccountUI(account);
            break;
        }

        case 3:
        {
            ClearConsoleScreen::Clear();
            if (!hasAccount)
            {
                std::cout << "No account found.\n";
                break;
            }

            bankUI::showDepositUI();

            double amount;
            std::cout << "Amount: ";
            if (!readDouble(amount))
            {
                std::cout << "Invalid amount.\n";
                break;
            }

            if (account.deposit(amount))
                std::cout << "Deposit successful.\n";
            else
                std::cout << "Deposit failed.\n";

            break;
        }

        case 4:
        {
            ClearConsoleScreen::Clear();
            if (!hasAccount)
            {
                std::cout << "No account found.\n";
                break;
            }

            bankUI::showWithdrawUI();

            double amount;
            std::cout << "Amount: ";
            if (!readDouble(amount))
            {
                std::cout << "Invalid amount.\n";
                break;
            }

            if (account.withdraw(amount))
                std::cout << "Withdraw successful.\n";
            else
                std::cout << "Withdraw failed. Check balance or amount.\n";

            break;
        }

        case 5:
            ClearConsoleScreen::Clear();
            bankUI::showEditAccountUI();
            std::cout << "Edit feature not implemented yet.\n";
            break;

        case 6:
            ClearConsoleScreen::Clear();
            bankUI::showDeleteAccountUI();
            account = Account();
            hasAccount = false;
            std::cout << "Account deleted.\n";
            break;

        case 7:
            running = false;
            break;

        default:
            std::cout << "Invalid choice.\n";
            break;
        }

        std::cout << "\nPress Enter to continue...";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin.get();
    }

    return 0;
}
