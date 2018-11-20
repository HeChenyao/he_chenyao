#include <iostream>
using namespace std;

int main()
{
        int counter=0,number[10],largest1=0,largest2=0;
        while(counter<=9)
        {
                cin>>number[counter];
                if(number[counter]>largest1)
                        largest1=number[counter];
                counter++;
        }
        counter=0;
        while(counter<=9)
        {
                if(number[counter]!=largest1)
                {
                        if(number[counter]>largest2)
                                largest2=number[counter];
                }
                counter++;
        }
        cout<<largest1<<"   "<<largest2<<endl;
        return 0;
}
