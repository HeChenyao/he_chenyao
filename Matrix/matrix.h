#ifndef MATRIX_H
#define MATRIX_H

#include<iostream>
#include<string>

class Matrix
{
    friend std::ostream &operator<<(std::ostream &,const Matrix &);
    friend std::istream &operator>>(std::istream &,const Matrix &);
private:
    std::string line;
};

#endif // MATRIX_H
