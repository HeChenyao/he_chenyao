#include <iostream>
#include <array>

using namespace std;
const size_t rows=2;
const size_t columns=3;
void Array(const array<array<int,columns>,rows>&a)
{
    for(auto const &row:a)
    {
        for(auto const &element:row)
            cout<<element<<"";
        cout<<endl;
    }
}

int main()
{
    array<array<int,columns>,rows>array={1,2,3,4,5,6};
    cout<<"Values in array by row are:"<<endl;
    Array(array);
};
