#ifndef SAVINGSACCOUNT_H_INCLUDED
#define SAVINGSACCOUNT_H_INCLUDED
#include <iostream>
#include "Account.h"

class SavingsAccount:public Account
{
public:
    SavingsAccount(const std::double &,const std::double &,const std::double &,const std::double &);

    void setSavingsAccount(double rat)
    {
        if (rat>1)
        {
            rate = 1;
            cout<<"The rate number is wrong!"<<endl;
        }
        else
            rate = rat;
    }
    std::double getSavingsAccount()
    {
        return rate;
    }

    double calculateInterest()
    {
        return balance*rate;
    }
private:
    double rate;
};

#endif // SAVINGSACCOUNT_H_INCLUDED
