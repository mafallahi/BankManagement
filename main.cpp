#include <iostream>
#include <limits>
#include "ui.h"
#include "clearScreen.h"



int main() {
	int mainChoice{ 0 };
	int accountChoice{ 0 };

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
			ClearConsoleScreen::Clear();
			bankUI::showWithdrawMenuUI();
			
		case 3:
			ClearConsoleScreen::Clear();
			bankUI::showDepositMenuUI();
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