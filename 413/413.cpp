#include <iostream>
using namespace std;
 int main()
{
    float miles=0, gallons=0,milesp=0,gallonsp=0;
    double mpg=0,total=0;

    cout<<"Enter miles driven (or -1 to quit):";
    cin >>miles;

    while (miles!=-1)
    {
    cout<<"Enter gallons used:";
    cin >>gallons;

    mpg = miles/gallons;
    cout<<"MPG this trip:"<<mpg<<endl;

    milesp+=miles;
    gallonsp+=gallons;
    total=milesp/gallonsp;

    cout<<"Total MPG:"<<total<<"\n\nEnter miles driven (or -1 to quit):";
    cin >>miles;

    }
      return 0;
}
