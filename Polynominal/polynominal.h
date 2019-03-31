#ifndef POLYNOMINAL_H
#define POLYNOMINAL_H

#include<iostream>

class Polynominal
{
public:
    void Input();
    void Output();
    Polynominal operator+(const Polynominal &);
    Polynominal operator-(const Polynominal &);
private:
    int n;
    int *z;
};

#endif // POLYNOMINAL_H
