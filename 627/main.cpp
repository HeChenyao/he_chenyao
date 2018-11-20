#include <iostream>
using namespace std;

double smallest( double x, double y, double z )
{
   if ( x < y && x < z )
      return x;
   else if ( y < x && y < z )
      return y;
   else
      return z;
}

int main()
{
   double number1;
   double number2;
   double number3;

   cout << "Enter three numbers: ";
   cin >> number1 >> number2 >> number3;
   cout << "The smallest number is " << smallest( number1, number2, number3 ) << endl;

}

