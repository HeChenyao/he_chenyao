#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include<iostream>

class Account
{
public:
    Account(const std::double &bal,const std::double &sav,const std::double &tak)
    {
        if (bal>0)
        {
            balance = bal;
        }
        else
        {
            balance = 0;
            cout<<"The number of balance is wrong."<<endl;
        }
    }

    void setBalance(const std::double &bal)
    {
        balance = bal;
    }
    std::double getBalance()
    {
        return balance;
    }

    void setSave(const std::double &sav)
    {
        save = sav;
    }
    std::double getSave()
    {
        return save;
    }

    void setTake(const std::double &tak)
    {
        take = tak;
    }
    std::double getTake()
    {
        return take;
    }

    double credit()
    {
        return balance+=save;
    };
    double debit()
    {
        if (take>balance)
        {
            return balance;
            cout<<"Debit amount exceeded account balance."<<endl;
        }
        else
            return balance-=take;
    };
protected:
    double balance;
    double save;
    double take;

};
#endif // ACCOUNT_H_INCLUDED
