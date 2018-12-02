#include <iostream>
using namespace std;

int main()
{
   for (int r=1;r<=5;r++)
   {
      for (int space=1;space<=5-r;space++)
         cout<<' ';

      for (int chr=1;chr<=2*r-1;chr++)
         cout<<'*';

      cout<<'\n';
   }
   for (int r=4;r>=1;r--)
   {
      for (int space=1;space<=5-r;space++)
         cout<< ' ';

      for (int chr= 1;chr<=2*r-1;chr++)
         cout<<'*';

      cout<<'\n';
   }
}
