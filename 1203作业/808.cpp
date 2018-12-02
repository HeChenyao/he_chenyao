#include <iostream>
using namespace std;

 int main()
 {
     unsigned int values[] = {2,4,6,8,10};
     unsigned int *vPtr = values;

     for (size_t i =0; i<5; ++i)
        cout<<"values["<<i<<"]="<<values[i]<<'\n';
        cout<<"\nPointer/offset notation where"<<"the [pointer is the array name\n";

    for (size_t offset1=0;offset1<5;++offset1)
        cout<<"(*values +"<<offset1<<")="<<*(values + offset1)<<'\n';
        cout<<"\nPointer subscript notation\n";

    for (size_t j =0;j<5;++j)
        cout<<"vPtr["<<j<<"]="<<vPtr[j]<<'\n';
        cout<<"\nPointer/offset notation\n";

    for (size_t offset2=0;offset2 <5;++offset2)
        cout<<"*(vPtr+"<<offset2<<")="<<*(vPtr+offset2)<<'\n';

 }
