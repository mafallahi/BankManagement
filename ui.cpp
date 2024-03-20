#include <iostream>
#include "ui.h"
/* MAIN MENU UI */
void showBankMenuUI() {
	std::cout << "**************** BANK MANAGEMENT ****************\n";
	std::cout << "\t1.Add Account\n";
	std::cout << "\t2.Show Account Lists\n";
	std::cout << "\t3.Withdraw\n";
	std::cout << "\t4.Deposit\n";
	std::cout << "\t5.Exit\n";
}

/* SHOW ADD ACCOUNT MENU LIST UI*/
void showAccountManagementUI() {
	std::cout << "**************** ACCOUNT Management ****************\n";
	std::cout << "\t1.New Account\n";
	std::cout << "\t2.Edit Account\n";
	std::cout << "\t3.Delete Account\n";
	std::cout << "\t4.Back \n";
}
void showNewAccountUI() {
	std::cout << "**************** NEW ACCOUNT ****************\n";
	std::cout << "\t1.Insert Account Information\n";
	std::cout << "\t2.Back \n";
}
void showEditAccountUI() {
	std::cout << "**************** Edit ACCOUNT ****************\n";
	std::cout << "\t1.Edit Account Information\n";
	std::cout << "\t2.Back \n";
}
void showDeleteAccountUI() {
	std::cout << "**************** Delete ACCOUNT ****************\n";
	std::cout << "\t1.Delete a Account \n";
	std::cout << "\t2.Back \n";
}

/* TODO: Show ACCOUNTS LIST UI */

/* SHOW WITHDRAW MENU UI */
void showWithdrawMenuUI() {
	std::cout << "**************** WITHDRAW ****************\n";
	std::cout << "\t1.Withdraw\n";
	std::cout << "\t5.Back\n";
}

/* SHOW DEPOSIT MENU UI */
void showDepositMenuUI() {
	std::cout << "**************** WITHDRAW ****************\n";
	std::cout << "\t1.Deposit\n";
	std::cout << "\t5.Back\n";
}