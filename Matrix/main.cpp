#include <iomanip>
#include "matrix.h"
using namespace std;

ostream &operator<<( ostream &output,const Matrix &line)
{
    output<<line<<endl;
    return output;
}

istream &operator>>( istream &input,const Matrix &line)
{
    input>>line;
    return input;
}



int main()
{
    int row;
    int i=1;
    Matrix line;
    cout<<"Enter row:"<<endl;
    cin >>row;

    while (i<=row)
    {
        ++i;
        cout<<"Enter matrix's lines:"<<endl;
        cin >>line;

    }
    cout<<"The matrix is:"<<line<<endl;

}
