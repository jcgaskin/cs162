//
//  BankAccount.hpp
//  
//
//  Created by Jared Gaskin on 10/10/17.
//
//

#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

#include <stdio.h>
#include <cstdlib>
#include <string>

using std::string;


class BankAccount
{
private:
    string customerName;
    string customerID;
    double customerBalance;
    
public:
    BankAccount(string name, string ID, double bal);
    string getCustomerName();
    string getCustomerID();
    double getCustomerBalance();
    void withdraw(double amt);
    void deposit(double amt);
    
};

#endif 
