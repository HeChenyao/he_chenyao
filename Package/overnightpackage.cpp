#include"Overnightpackage.h"

OvernightPackage::OvernightPackage(const string rec,const string con,const string adr,
                             const string cit,const string sta,const string pos,
                             double wei,double pri,double epr)
    : Package(rec,con,adr,cit,sta,pos,wei,pri)
{
    setExtraPrice(epr);
}

void OvernightPackage::setOvernightPrice(double epr)
{
    ExtraPrice = epr;
    TotalPrice = wei * (epr + pri);
}

void DisplayOvernightPackage()
{
    void DisplayPackage();
    cout<<'Addition fee due to the delay of two days:'<<ExtraPrice;
    cout<<'Total price is:'<<TotalPrice;
    cout<<endl;
}
