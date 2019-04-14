#include <iostream>
#include <iomanip>
#include "Account.h"
using namespace std;

int main()
{
     Accout accout(300000,6000,14000);

     cout<<"BALANCE: "<<balance<<setprecision(2);
     cout<<"Save: "<<save<<setprecision(2);
     cout<<"Take: "<<take<<setprecision(2);

     cout<<"The Balance After Saving: "<<account.credit();
     cout<<"The Balance After Taking: "<<account.dedit();

     return 0;
}
