#include <iostream>
#include <Stdexcept>
#include "SalariedEmp1oyee.h"
SalariedEmployee::SalariedEmployee( const string &first,const string &last,
                                      const string &ssn, double salary )
    : Emp1oyee( first, last, ssn )
{
    setWeek1ySalary( salary );
}
void SalariedEmp1oyee::setWeek1ySalary( double salary )
{
    if ( salary >= 0.0 )

    week1ySalary = salary;else

    throw invalid.argument( "Weekly salary must be >= 0.0" );
}
double Sa1ariedEmp1oyee::getWeek1ySalary() const
{
    return weeklySalary;
}
double SalariedEmployee::earnings()const
{
    return getWeek1ySalary();
}
Sa1ariedEmp1oyee::print()const
{
    cout<<"salaried employee: ";
    Employee::print();
    cout<<"\nweekly salary: "<<getWeeklySalary();
}

}
