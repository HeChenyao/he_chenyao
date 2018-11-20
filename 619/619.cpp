#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse( double s1, double s2 )
{
   return sqrt( s1 * s1 + s2 * s2 );//sprt是开平方根的意思即为求斜边公式。
}

int main()
{
   double side1;
   double side2;
   for ( int i = 1; i <= 3; i++ )
   {
      cout<< "Enter 2 sides";
      cin >> side1 >> side2;
      cout<< "Hypotenuse:" << hypotenuse( side1, side2 ) << endl;
   }
}
