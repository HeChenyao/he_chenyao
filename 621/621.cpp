#include <iostream>
using namespace std;

bool iseven( int a )
{
   return ( a % 2 );
}

int main()
{
   int number;
   while (number>=0)
   {
      cout << "Enter number: ";
      cin >> number;
      if ( iseven( number ) )
         cout <<  "It is an odd integer\n\n";
      else
         cout <<  "It is an even integer\n\n";
   }
   return 0;

}
