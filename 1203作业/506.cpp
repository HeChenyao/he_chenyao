#include <iostream>
using namespace std;

int main()
{
   int number;
   int count=0;
   int total=0;

   cin>>number;

   while ( number != 9999 )
   {
      total += number;
      count++;

      cin>>number;
   }
   cout<<"\nThe average is: "<<total/count<<endl;
}
