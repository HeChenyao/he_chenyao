#include <iostream>
using namespace std;
//我觉得重点在于空格和*的排列。把空格也当作一个字符加入排列中。

int main()
{
   int r;
   int c;
   int space;

   cout<<"(a)"<<'\n';

   for (r=1;r<=10;r++ )
   {
      for (c= 1;c<=r;c++ )
         cout<<"*";

      cout<<endl;
   }
   cout<<endl;

   cout<<"(b)"<<'\n';

   for (r=10;r>=1;r--)
   {
      for (c=1;c<=r;c++)
         cout<<"*";

      cout<<endl;
   }

   cout<<endl;

   cout<<"(c)"<<'\n';

   for(r=10;r>=1;r--)
   {
      for (space=10;space>r;space-- )
         cout<<" ";

      for (c=1;c<=r;c++)
         cout<<"*";

      cout<<endl;
   }

   cout<<endl;

   cout<<"(d)"<<'\n';

   for (r=10;r>=1;r--)
   {
      for (space=1;space<r;space++ )
         cout<<" ";

      for (c=10; c>=r;c-- )
         cout<<"*";

      cout<<endl;
   }
}
