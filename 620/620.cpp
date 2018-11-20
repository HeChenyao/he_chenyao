#include <iostream>
using namespace std;

bool multiple( int a, int b )//bool是逻辑型变量的定义符
{
   return !( b % a );
}

int main()
{
   int number1;
   int number2;
   while (number1!=0 && number2!=0)
   {
      cout << "Enter two numbers: ";
      cin >> number1 >> number2;
      if ( multiple( number1, number2 ) )
         cout <<"TRUE!" << "\n\n";
      else
         cout <<"FALSE!"<< "\n\n";
   }

}
