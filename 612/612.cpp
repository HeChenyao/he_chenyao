#include <iostream>
#include <cmath>
using namespace std;

double calculateCharges( double h )
{
   double c;

   if ( h < 3.0 )
      c = 2.0;
   else
      c = 2.0 + .5 * ceil( h - 3.0 );

   return c;
}


int main()
{
   double hour;
   double charge;
   double tcharges = 0.0;
   double thours = 0.0;
   bool first = true;

   for ( int i = 1; i <= 3; i++ )
   {
      cin >> hour;
      thours += hour;

      if ( first )
      {
         cout <<"\t"<< "Car" << "\t"<< "Hours"
            << "\t"<< "Charge\n";

         first = false;
      }

      charge = calculateCharges( hour );
      tcharges += charge;

      cout << "\t"<< i << "\t" << hour
           << "\t"<< charge << "\n";
   }

   cout << "\t"<< "TOTAL" << "\t"
        << thours << "\t"<< tcharges << endl;
}
