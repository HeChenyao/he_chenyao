#include<iostream>
#include"polynominal.h"
using namespace std;


void Polynominal::Input()
{
    cout<<"Enter the exponent:";
    cin>>n;
    z=new int[n+1];
    cout<<"enter coefficients in order :";
    for(int i=n;i>=0;i--)
        cin>>z[i];
}

void Polynominal::Output()
{
    for(int i=n;i>=0;i--)
    {
        if(i==n)
        {
            if(z[i]==1)
                cout<<"x^"<<i;
            else if(z[i]==-1)
                cout<<"-x^"<<i;
            else
                cout<<z[i]<<"x^"<<i;
        }
        else if(i==1)
        {
            if(z[i]==0)
                continue;
            else if(z[i]>0)
                cout<<"+"<<z[i]<<"x";
            else if(z[i]<0)
                cout<<"-"<<(-z[i])<<"x";
        }
        else if(i==0)
        {
            if(z[i]==0)
                cout<<endl;
            else if(z[i]>0)
                cout<<"+"<<z[i]<<endl;
            else if(z[i]<0)
                cout<<"-"<<(-z[i])<<endl;
        }
        else if(i>0&&i<n)
        {
            if(z[i]==0)
                continue;
            else if(z[i]==1)
                cout<<"+x^"<<i;
            else if(z[i]==-1)
                cout<<"-x^"<<i;
            else if(z[i]>0)
                cout<<"+"<<z[i]<<"x^"<<i;
            else if(z[i]<0)
                cout<<"-"<<(-z[i])<<"x^"<<i;
        }

    }
}

Polynominal Polynominal::operator+(const Polynonmial &rhs)
{
    Polynominal sum;
    int Maxn=n>rhs.n?n:rhs.n;
    int Minn=n<rhs.n?n:rhs.n;
    sum.n=Maxn;
    sum.z=new int[sum.n+1];
    if(rhs.n==Maxn)
    {
        for(int i=0;i<rhs.n+1;i++)
            sum.z[i]=rhs.z[i];
    }
else
{
        for(int i=0;i<n+1;i++)
            sum.z[i]=z[i];
    }
    for(int i=0;i<Minn+1;i++)
        sum.z[i]=z[i]+rhs.z[i];
    return sum;
}

Polynominal Polynominal::operator-(const Polynomial &rhs)
{
    Polynomial sub;
    int Maxn=n>rhs.n?n:rhs.n;
    int Minn=n<rhs.n?n:rhs.n;
    sub.n=Maxn;
    sub.z=new int[sub.n+1];
    if(rhs.n==Maxn)
    {
        for(int i=0;i<Maxn+1;i++)
            sub.z[i]=rhs.z[i];
    }
    else{
        for(int i=0;i<Maxn+1;i++)
            sub.z[i]=z[i];
    }
    for(int i=0;i<Minn+1;i++)
        sub.z[i]=z[i]-rhs.z[i];
    return sub;

}

int main()
{
    Polynominal a,b,c,d;
    a.Input();
    b.Input();
    c=a+b;
    d=a-b;
    a.Output();
    b.Output();
    c.Output();
    d.Output();
    return 0;
}
