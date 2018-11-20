#include <iostream>
using namespace std;
int main()
{
    int number=0,largest=0,counter=1;

    while(counter<=10)
    {
        cout<<"Enter number:";
        cin >>number;
        largest=(number>largest?number:largest);
        counter++;
    }
    cout<<"The largest is:"<<largest<<"\n\nEnter number:";
    cin >>number;
    return 0;
}
