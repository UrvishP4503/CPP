#include <bits/stdc++.h>
#include "Account.h"

using namespace std;

int main() {
    Account urvish_account;
    urvish_account.set_name("Baba's account");
    urvish_account.set_balance(1000.0);
    
    if (urvish_account.deposit(200.0))
        cout << "Deposit OK" << endl;
    else 
        cout << "Deposit Not allowed" << endl;
    urvish_account.show_belance();
        
    if (urvish_account.withdraw(500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
    urvish_account.show_belance();
        
    if (urvish_account.withdraw(1500.0))
        cout << "Withdraw OK" << endl;
    else
        cout << "Not sufficient funds" << endl; 
    urvish_account.show_belance();
    return 0;
}

