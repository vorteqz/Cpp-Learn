#pragma once
#include <vector>
#include "Account.h"

class Bank {
public:
    void menu();

private:
    std::vector<Account> accs;
    Account* login();
};
