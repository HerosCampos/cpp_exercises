#include <iostream>
#include <string>
#include <vector>
#include "Account.h"
#include "Account.cpp"


int main()
{
    Account frank_account("Frank", 100);
    // Account frank_account;

    // Account frank_account;
    // frank_account.set_name("Frank");
    // frank_account.set_balance(100.50);

    display_account(frank_account);
    frank_account.deposit(100.20);
    display_account(frank_account);
    frank_account.withdraw(125.32);
    display_account(frank_account);
}

