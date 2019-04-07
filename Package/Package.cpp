#include <iostream>
#include 'Package.h'
#include 'OverNightPackage.h'
#include 'TwoDayPackage.h'
using namespace std;
int main()
{
    Package pk1('Doney','Brenda','Strawberry Str.','New York','New York','990712',3.0,15.0);
    pk1.calculateCost();
    pk1.print();
    cout<<'';
    TwoDayPackage tdp1('Brenda','Doney','Watermelon Str','New York','New York','990712',4.0,15.0,5.0);
    tdp1.print();
    cout<<'';
    OvernightPackage onp1('Klaus','Brenda','Summer Str.','New York','New York','990712',5.0,15,10.0);
    onp1.calculateCost();
    onp1.print();

    return 0;
}
