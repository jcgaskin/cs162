//
//  BankAccount.cpp
//  
//
//  Created by Jared Gaskin on 10/10/17.
//
//


#include "BankAccount.hpp"



BankAccount::BankAccount(string name, string id, double bal)
{
    customerName = name;
    customerID = id;
    customerBalance = bal;
}

string BankAccount::getCustomerName()
{
    return customerName;
}

string BankAccount::getCustomerID()
{
    return customerID;
}
double BankAccount::getCustomerBalance()
{
    return customerBalance;
}
void BankAccount::withdraw(double amt)
{
    customerBalance -= amt;
}

void BankAccount::deposit(double amt)
{
    customerBalance += amt;
}
