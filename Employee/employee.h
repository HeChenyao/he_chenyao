#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
public:
    Employee( const std::string &, const std::string &,const std::string & );
    virtual ~Employee() { }
    void setFirstName( const std::string &);
    void setLastName( const std::string &);
    void setSocialSecurityNumber( const std::string & );
    std::string getSocialSecurityNumber() const;

    double earnings()const=0;
    void print() const;
private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;

#endif // EMPLOYEE_H
