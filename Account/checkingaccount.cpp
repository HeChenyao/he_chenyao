#include <iostream>
#include <iomanip>
#include "CheckingAccount.h"
using namespace std;

CheckingAccount::CheckingAccount(const std::double &,const std::double &,
                                 const std::double &,const std::double &,
                                 const std::double &)
    :Account(bal,sav,tak)
{
    setCheckingAccount(cos,balance0);
}

int main
{
    CheckingAccount checking(300000,6000,14000,2,0);

    cout<<"BALANCE: "<<balance<<setprecision(2);
    cout<<"Save: "<<save<<setprecision(2);
    cout<<"Take: "<<take<<setprecision(2);

    cout<<"The Balance After Saving: "<<account.credit();
    cout<<"The Balance After Taking: "<<account.dedit();

    checking.checking();

    cout<<"Cost: "<<checking.getCheckingAccount()<<setprecision(2);
}
