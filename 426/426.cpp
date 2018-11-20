#include <iostream>
using namespace std;

int main()
{
    int number,g,s,q,w;

    cout<<"Enter number:";
    cin >>number;

    g=number%10;
    s=(number/10)%10;
    q=(number/1000)%10;
    w=(number/10000)%10;

    if (g==w && s==q)
        cout<<"yes~"<<endl;
    else
        cout<<"no~"<<endl;

    return 0;
}
