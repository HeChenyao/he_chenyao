#include <iostream>
using namespace std;

int main()
{
   int count=0;
   int hypotenuseSquared;//斜边平方
   int sidesSquared;//直角边的平方（和）

   cout<<"Side 1\tSide 2\tSide3"<<'\n';

   for (int side1=1;side1<=500;side1++)
   {
      for (int side2=side1;side2<=500;side2++)
      {
         for (long hypotenuse=side2;hypotenuse<= 500;hypotenuse++)//限制三条边都不大于500
         {
            hypotenuseSquared=hypotenuse*hypotenuse;

            sidesSquared=side1*side1+side2*side2;

            if (hypotenuseSquared==sidesSquared)
            {
               cout<<side1<<'\t'<<side2<<'\t'<< hypotenuse << '\n';
               count++;
            }
         }
      }
   }
}
