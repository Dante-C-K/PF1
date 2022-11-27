#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <fstream>

using namespace std;

class Account
{
public:
    // Constructors
    Account();
    Account(const string firstNameIn, const string lastNameIn, const string PINIn, const string accountNumberIn);
    Account(const Account & copy);
    ~Account();

    // Utility methods
    void print() const;

    // Getters
    string getFirstName() const;
    string getLastName() const;
    string getPIN() const;
    string getAccountNumber() const;

    // Setters
    void setFirstName(const string firstNameIn);
    void setLastName(const string lastNameIn);
    void setPIN(const string PINIn);
    void setAccountNumber(const string accountNumberIn);

    // Public Account attributes
    string firstName;
    string lastName;

private:
    // Private Account attributes
    string PIN;
    string accountNumber;
};

#endif

