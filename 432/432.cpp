#include <iostream>
using namespace std;

int main()
{
    double a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    if (a+b>c && a-b<c)
        cout<<"yes~";
    else if (a+c>b && a-c<b)
        cout<<"yes~";
    else if (b+c>a && b-c<a)
        cout<<"yes~";
    else
        cout<<"no~";

    return 0;
}
