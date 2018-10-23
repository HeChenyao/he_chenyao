#include <iostream>

using namespace std;

int main()
{
    float accountnumber=0, beginningbalance=0, totalcharge=0, totalcredits=0, creditlimit=0, newbalance=0;
    cout <<"Enter account number(or -1 to quit):";
    cin >>accountnumber;

    while (accountnumber!=-1)
    {
    cout <<"Enter the beginning balance:";
    cin >>beginningbalance;
    cout <<"Enter total charges:";
    cin >>totalcharge;
    cout <<"Enter total credits:";
    cin >>totalcredits;
    cout <<"Enter credit limit:";
    cin >>creditlimit;

    newbalance=beginningbalance+totalcharge-totalcredits;

    if(newbalance>creditlimit)
    {
        cout <<"New balance is:"<< newbalance<<endl;
        cout <<"Account:"<<accountnumber<<endl;
        cout <<"Credit limit:" << creditlimit<<endl;
        cout <<"Balance:"<<newbalance<<endl;
        cout <<"Credit limit Exceeded.\n\nEnter amount number (or -1 to exit):";
        cin >>accountnumber;
    }

    else
        cout <<"New balance is"<<accountnumber+newbalance<<"\n\nEnter amount number (or -1 to exit):"<<endl;

        cin >>accountnumber;
    }


    return 0;
}
