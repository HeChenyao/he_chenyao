#include<iostream>
using namespace std;

int main()
{
    int hours=0;
    double rate=0;
    double salary=0;

    cout<<"Enter hours worked (-1 to end):"<<endl;
    cin>>hours;

    while (hours!=-1)
    {
        cout<<"Enter hourly rate of the employee($00.00):"<<endl;
        cin>>rate;

        if (hours<=40)
        {
            salary=hours*rate;
        }
        else
        salary=40*rate+(hours-40)*1.5*rate;

        cout<<"Salary is: $"<<salary<<"\n\nEnter hours worked (-1 to end):";
        cin>>hours;
    }
    return 0;
}
