#pragma once
#include "account.h"

namespace bankUI
{
    void showMainMenuUI();
    void showCreateAccountUI();
    void showShowAccountUI(const Account& account);
    void showDepositUI();
    void showWithdrawUI();
    void showEditAccountUI();
    void showDeleteAccountUI();
}
