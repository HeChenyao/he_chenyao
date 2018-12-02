#include <iostream>
using namespace std;

int main()
{
   int factorial = 1; //factorial是阶乘的意思

   cout << "x\tx!"<<'\n';

   for (int i=1;i<=5;i++ )
   {
      factorial *= i;

      cout << i << '\t' << factorial << '\n';
   }
}
