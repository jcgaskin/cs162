//
//  bankAccountMain.cpp
//  
//
//  Created by Jared Gaskin on 10/10/17.
//
//

#include <stdio.h>
#include <iostream>
#include "BankAccount.hpp"

using std::cout;
using std::endl;

int main()
{
    BankAccount account1("Harry Potter", "K4637", 8032.78);
    account1.withdraw(244.0);
    
    cout << account1.getCustomerBalance() << endl;
    
    account1.withdraw(3012.58);
    
      cout << account1.getCustomerBalance() << endl;
    account1.deposit(37.54);
    
      cout << account1.getCustomerBalance() << endl;
    account1.withdraw(1807.12);
    
      cout << account1.getCustomerBalance() << endl;
    account1.deposit(500.00);
    
    double finalBalance = account1.getCustomerBalance();
    
    cout << finalBalance << endl;
    
    
    return 0;
}
