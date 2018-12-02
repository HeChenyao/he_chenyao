#include <iostream>
using namespace std;

int main()
{
   int number;
   int factor;

   cout << "Decimal\t\tBinary\t\tOctal\tHexadecimal\n";//分别是十进制二进制八进制十六进制

   for ( int loop = 1; loop <= 256; loop++ )
   {
      cout << dec << loop << "\t\t";

      number = loop;
      factor = 256;

      cout << ( number == 256 ? '1' : '0' );//输出二进制，在这个for循环里包容一个do循环

      do
      {
         cout <<
            ( number < factor && number >= ( factor / 2 ) ? '1' : '0' );

         factor /= 2;
         number %= factor;
      } while ( factor > 1 );

      cout << '\t' << oct << loop;//输出八进制

      cout << '\t' << hex << loop << endl;//输出十六进制并进入下一行的运算
   }
}
