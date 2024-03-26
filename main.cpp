#include <iostream>
#include <string>
#include <limits>
#include "ui.h"
#include "clearScreen.h"
#include "account.h"

struct PersonData
{
	std::string name{};
	std::string family{};
	std::string address{};
	std::string phone{};
	int id{0};
	double balance{0};

};
int main() {
	int mainChoice{ 0 };
	int accountChoice{ 0 };
	int accountWithdrawChoice{ 0 };
	int accountDepositChoice{ 0 };
	int newAccountChoice{ 0 };
	int newSuccessAccountChoice{ 0 };
	double accountWithdrawBalance{ 0 };
	double accountDepositBalance{ 0 };
	Account newAccount;
	PersonData newPerson;
	do
	{
		MainMenu:
		ClearConsoleScreen::Clear();
		bankUI::showBankMenuUI();
		std::cout << "Please Choice your option : ";
		std::cin >> mainChoice;

		switch (mainChoice)
		{
		case 1:
			AccountMenu:
			ClearConsoleScreen::Clear();
			bankUI::showAccountManagementUI();
			std::cout << "Please Choice your option : ";
			std::cin >> accountChoice;
			switch (accountChoice)
			{

				case 1:
					ClearConsoleScreen::Clear();
					bankUI::showNewAccountUI();
					std::cout << "Please Choice your option : ";
					std::cin >> newAccountChoice;
					switch (newAccountChoice)
					{
					case 1:
						ClearConsoleScreen::Clear();
						bankUI::showNewAccountInformationUI();
						std::cout << "\tPlease Enter Your Name: ";
						std::getline(std::cin >> std::ws, newPerson.name);

						newAccount.setName(newPerson.name);

						std::cout << "\tPlease Enter Your Family: ";
						std::getline(std::cin >> std::ws, newPerson.family);
						newAccount.setFamily(newPerson.family);

						std::cout << "\tPlease Enter Your Address: ";
						std::getline(std::cin >> std::ws, newPerson.address);
						newAccount.setAddress(newPerson.address);

						std::cout << "\tPlease Enter Your Phone: ";
						std::getline(std::cin >> std::ws, newPerson.phone);
						newAccount.setPhone(newPerson.phone);

						std::cout << "\tPlease Enter Your ID: ";
						std::cin >> newPerson.id;
						newAccount.setID(newPerson.id);

						std::cout << "\tSet Your Balance: ";
						std::cin >> newPerson.balance;
						newAccount.setBalance(newPerson.balance);

						SuccessAccountMenu:
						ClearConsoleScreen::Clear();
						bankUI::showNewAccountSuccessInformationUI();
						std::cout << "\n\tWelcome " << newAccount.getName() << " to our bank.\n";
						std::cout << "\tYou are now our client and this is your Balance: $" << newAccount.getBalance() <<"\n";
						std::cout << "\tif you wanna back to main menu enter number 1: ";
						std::cin >> newSuccessAccountChoice;
						if (newSuccessAccountChoice == 1) {
							goto MainMenu;
						}
						else {
							std::cin.clear();
							std::cin.ignore(std::numeric_limits<int>::max(), '\n');
							goto SuccessAccountMenu;
						}
						
					}
					break;
				case 2:
					ClearConsoleScreen::Clear();
					bankUI::showEditAccountUI();
					break;
				case 3:
					ClearConsoleScreen::Clear();
					bankUI::showDeleteAccountUI();
					break;
				case 4:
					goto MainMenu;
					
				default:
					std::cout << "Error, Your choice not in Menu Options!\nPlease Choice right option.";
					goto AccountMenu;
			}
			break;
		case 2:
			WithdrawMenu:
			ClearConsoleScreen::Clear();
			bankUI::showWithdrawMenuUI();
			std::cout << "Please Choice your option : ";
			std::cin >> accountWithdrawChoice;
			switch (accountWithdrawChoice)
			{
			case 1:
				WithdrawSecondMenu:
				ClearConsoleScreen::Clear();
				bankUI::showWithdrawScondMenuUI();
				std::cout << "\n\tHey " << newAccount.getName() << ", This is your Balance:$ " << newAccount.getBalance() <<"\n";
				std::cout << "\nHow much money you want withdraw:$ ";
				std::cin >> accountWithdrawBalance;
				if (accountWithdrawBalance <= 0) {
					std::cout << "You Can't use negetive numbers.\n ";
					goto WithdrawSecondMenu;
				}
				else {
					newAccount.withdrawBalance(accountWithdrawBalance);
					goto WithdrawMenu;
				}
				break;
			case 2:
				goto MainMenu;
				break;
			default:
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<int>::max(), '\n');
				std::cout << "Error, Your choice not in Menu Options!\nPlease Choice right option.";
				goto WithdrawMenu;
				break;
			}
			break;	
		case 3:
			DepositMenu:
			ClearConsoleScreen::Clear();
			bankUI::showDepositMenuUI();
			std::cout << "Please Choice your option : ";
12			std::cin >> accountDepositChoice;
			switch (accountDepositChoice)
			{
			case 1:
				DepositSecondMenu:
				ClearConsoleScreen::Clear();
				bankUI::showDepositScondMenuUI();
				std::cout << "\n\tHey " << newAccount.getName() << ", This is your Balance:$ " << newAccount.getBalance() << "\n";
				std::cout << "\nHow much money you want deposit:$ ";
				std::cin >> accountDepositBalance;
				if (accountDepositBalance <= 0) {
					std::cout << "You Can't use negetive numbers.\n ";
					goto DepositSecondMenu;
				}
				else {
					newAccount.depositBalance(accountDepositBalance);
					goto DepositMenu;
				}
				break;
			case 2:
				goto MainMenu;
			default:
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<int>::max(), '\n');
				std::cout << "Error, Your choice not in Menu Options!\nPlease Choice right option.";
				goto DepositMenu;
				break;
			}
			break;
		case 4:
			std::exit(1);
		default:

			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');
			std::cout << "Error, Your choice not in Menu Options!\nPlease Choice right option.";
			goto MainMenu;
		}

	} while (!mainChoice);
	return 0;
}