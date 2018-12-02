#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,6>alphabet;
    array<float,4>grades;
    array<int,5>values={8,8,8,8,8};

    int total=0;
    array<double,100>temperatures;
    for (size_t i=0;i<temperatures.size();++i)
        total+=temperatures[i];
    cout<<total<<endl;

    double largest,smallest;
    array <double,99> array={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30
    ,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65
    ,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99};
    for(size_t i=0;i<=array.size();i++)
    {
        if(array[i]>=array[i+1])
            largest=array[i];
            smallest=array[i+1];
        if(array[i]<array[i+1])
            smallest=array[i];
            largest=array[i+1];
    }
    cout<<"Largest is "<<largest<<"Smallest is "<<smallest;

}
