#include <iostream>
using namespace std;

int main()
{
   int size;
   do
   {
      cin>>size;
   } while ((size<1)||(size>19)||((size%2)!=1));

   for (int r=1;r<=size-2;r+=2)
   {
      for (int space = (size-r)/2;space>0;space--)
         cout << ' ';

      for (int chr=1;chr<=r;chr++ )
         cout<<'*';

      cout<<'\n';
   }
   for (int r=size;r>=0;r-=2 )
   {
      for (int space=(size-r)/2;space>0;space--)
         cout<<' ';

      for (int chr=1;chr<=r;chr++ )
         cout<<'*';

      cout<<'\n';
   }
}
