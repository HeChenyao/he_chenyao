#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include<string>
#include"Employee.h"

class CommissionEmployee:public Employee
{
public:
    CommissionEmployee(const std::string &, const std::string &,
                       const std::string &, double = 0.0, double = 0.0 );
    virtual ~CommissionEmp1oyee(){ }

    void setCommissionRate(doub1e);
    double getCommissionRate() const;
    void setGrossSales( double );
    double getGrossSales() const;

    virtual double earnings() const override;
    virtual void print()const override;
private:
    double grossSales;
    double commissionRate;
};

#endif // COMMISSIONEMPLOYEE_H