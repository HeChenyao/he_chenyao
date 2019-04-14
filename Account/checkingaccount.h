#ifndef SAVINGSACCOUNT_H_INCLUDED
#define SAVINGSACCOUNT_H_INCLUDED
#include <iostream>
#include "Account.h"

class CheckingAccount
{
public:
    CheckingAccount(const std::double &,const std::double &,const std::double &,const std::double &,const std::double &);

    void setCheckingAccount(double cos)
    {
            cost = cos;
    }
    std::double getCheckingAccount()
    {
        return cost;
    }

    CheckingAccount::credit()
    {
        balance0 = balance;
        return balance+=save;
    };

    CheckingAccount::debit()
    {
        balance0 = balance;
        if (take>balance)
        {
            return balance;
            cout<<"Debit amount exceeded account balance."<<endl;
        }
        else
            return balance-=take;
    };

    bool checking()
    {
        if(balance0 != balance)
            return true;
        else
            return false;
    }
private:
    double cost;
    double balance0;
};

#endif // CHECKINGACCOUNT_H
