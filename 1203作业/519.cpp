#include <iostream>
using namespace std;

int main()
{
   double pai=0.0;
   double denominator=1.0;//分母
   int n=1000;

   for (int i=1;i<=n;i++)
   {
      if (i%2!=0)
         pai+=4.0/denominator;
      else
         pai-=4.0/denominator;

      cout<<i<<"\t"<<pai<<'\n';

      denominator+=2.0;
   }

}
