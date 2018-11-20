#include <iostream>
using namespace std;

int inverse( int n )//定义函数逆序inverse
{
   int inverse = 0;
   while ( n > 0 )
   {
      inverse *= 10;
      inverse += n % 10;
      n /= 10;
   }

   return inverse;
}

int main()
{
   int number;

   cout << "Enter number";
   cin >> number;

   cout << "The inverse number is:";

   cout << inverse( number ) << endl;
}
