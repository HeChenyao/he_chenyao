#include <iostream>
using namespace std;

int main()
{
   int sum= 0;
   int n;
   int number;

   cin>>n;

   for (int i=1;i<=n;i++)
   {
      cin>>number;
      sum+=number;
   }

   cout <<"Sum of the "<<n<<" numbers is "<<sum<< endl;
}
