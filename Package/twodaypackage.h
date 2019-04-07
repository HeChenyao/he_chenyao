#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include 'Package.h'

class TwoDayPackage : public Package
{
public:
    TwoDayPackage(const string &,const string &,const string &,
                  const string &,const string &,const string &,
                  double = 0.0,double = 0.0,double =0.0);
    void setTwoDayPrice(double tpr);
    void print();
private:
    double twoDayPrice;
    double totalPrice;
};

#endif // TWODAYPACKAGE_H
