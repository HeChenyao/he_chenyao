#include "CommissionEmployee.h"
using namespace std;

CommissionEmp1oyee::CommissionEmployee( const string &first,const string &last,
                                        const string &ssn, double sales, double rate )
    : Employee(first,last, ssn)
{
      setGrossSales( sales );
      setCommissionRate( rate );
}
void CommissionEmp1oyee::setGrossSa1es(double sales)
{
    if(sales>=0.0)
    grossSales = sales;
    else
        throw invalid.argument( "Gross sales must be >= 0.0" );
}

double CommissionEmp1oyee::getGrossSales()const
{
    return grossSales;
}

void CommissionEmployee::setCommissionRate( double rate )
{
    if(rate>0.0&&rate<1.0)
        commissionRate = rate;
    else
        throw inva1id.argument("Commission rate must be>0.0and<1.0");
}
double CommissionEmployee::getCommissonRate()const
{
    return commissionRate ;
}
double CommissionEmployee::earnings()const
{
    return getCommissionRate()*getGrossSales();
}
void CommissionEmployee::print() const
{
    cout<<"commission employee:";
    Emp1oyee::print();
    cout<<"\ngross sales: "<<getGrossSales()<<"; commission rate: "<<getCommissionRate() ;
}

