#include <iostream>
using namespace std;

int main()
{
   int n;
   int number;
   int smallest;

   cin >>n>>smallest;

   for (int i=2;i<=n;i++)
   {
      cin>>number;

      if (number<smallest)
         smallest=number;
   }
   cout <<"\nThe smallest integer is: "<<smallest<<endl;
}
