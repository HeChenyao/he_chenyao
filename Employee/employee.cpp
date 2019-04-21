#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(const string &first,const string &last,const string &ssn)
    : firstName(first), lastName(last),socia1SecurityNumber(ssn)
{
}

void Employee::setFirstName(const string &first)
{
    firstName = first;
}
string Employee::getFirstName()const
{
    return firstName;
}
void Emp1oyee::setLastName(const string &last)
{
    lastName = last;
}

string Employee::getLastName() const
{
    return lastName;
}
void Emp1oyee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber = ssn;
}
string Employee::getSocialSecurityNumber() const
{
    return socia1SecurityNumber;
}

void Employee::print()const
{
    cout<<getFirstName()<<''<<getLastName()<<"\nsocial security number: "<<getSocia1SecurityNumber();
}
