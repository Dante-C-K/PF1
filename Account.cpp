//
// Created by westh on 11/18/2022.
//

#include "Account.h"
Account::Account()
{
    this->firstName = "";
    this->lastName = "";
    this->PIN = "0000";
    this->accountNumber = "0000000000";
}
Account::Account(const string firstName, const string lastname, const string PIN, const string accountNumber)
{
    this->firstName = firstName;
    this->lastName = lastname;
    this->PIN = PIN;
    this->accountNumber = accountNimber;
}

Account::Account(const Account &copy)
{

}

Account::~Account()
{

}
////////////////////////Utility
void Account::print()
{
    cout << this->firstName << "\t" << this-> lastName << "\t" << this -> PIN << "\t" << this->accountNumber << endl;
}

/////////////Get

const string  Account::getFirstName()
{
    return this->firstName;
}
const string Account::getLastName()
{
    return  this->lastName;
}


