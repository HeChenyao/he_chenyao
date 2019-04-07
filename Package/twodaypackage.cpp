#include 'TwoDayPackage.h'
TwoDayPackage::TwoDayPackage(const string rec,const string con,const string adr,
                             const string cit,const string sta,const string pos,
                             double wei,double pri,double tpr)
    : Package(rec,con,adr,cit,sta,pos,wei,pri)
{
    setTwoDayPrice(tpr);
}
void TwoDayPackage::setTwoDayPrice(double tpr)
{
    TwoDayPrice = tpr;
    TotalPrice = wei * (tpr + pri);
}
void TwoDayPackage::print()
{
    void DisplayPackage();
    cout<<'Addition fee due to the delay of two days:'<<TwoDayPrice;
    cout<<'Total price is:'<<TotalPrice;
    cout<<endl;
}
