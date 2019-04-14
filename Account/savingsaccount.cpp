#include <iostream>
#include <iomanip>
#include "SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount(const std::double &bal,const std::double &sav,const std::double &tak,const std::double &rat)
    :Account(bal,sav,tak)
{
    setSavingsAccount(rat);
}

int main
{
    SavingsAccount interest(300000,6000,14000,0.05);

    cout<<"BALANCE: "<<balance<<setprecision(2);
    cout<<"Save: "<<save<<setprecision(2);
    cout<<"Take: "<<take<<setprecision(2);

    cout<<"The interest is: "<<interest.calculateInterest()<<take<<setprecision(2);

    return 0;
}
