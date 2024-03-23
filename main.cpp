#include <iostream>
#include <limits>
#include "ui.h"
#include "clearScreen.h"



int main() {
	int mainChoice{ 0 };
	int accountChoice{ 0 };
	int accountWithdrawChoice{ 0 };
	int accountDepositChoice{ 0 };

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
				//do somthing about witdraw
				goto WithdrawMenu;
			case 2:
				goto MainMenu;
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
			std::cin >> accountDepositChoice;
			switch (accountDepositChoice)
			{
			case 1:
				//do somthing about deposit
				goto DepositMenu;
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