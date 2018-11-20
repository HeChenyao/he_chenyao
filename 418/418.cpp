#include <iostream>
using namespace std;

int main()
{
    int n=1,ns=0,nb=0,nq=0;
    cout<<"N"<<"\t"<<"10*N"<<"\t"<<"100*N"<<"\t"<<"1000*N"<<endl;
    cout<<"\n"<<endl;
    while(n<=5)
    {
        ns=10*n;
        nb=100*n;
        nq=1000*n;

        cout<<n<<"\t"<<ns<<"\t"<<nb<<"\t"<<nq<<endl;

        n++;
    }

}
