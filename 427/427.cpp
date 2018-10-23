#include<iostream>
using namespace std;

int main()
{
  //设置了二进制数，运算辅助的过渡数，十进制数，进制计算数这四种变量
  int binaryNumber=0, transitionNumber=0, decimalNumber=0, scale=0;
  cout<<"Enter a binary number:";
  cin>>binaryNumber;

  transitionNumber=binaryNumber;
  decimalNumber=0;
  scale=1;

  while ( transitionNumber )
  {
  decimalNumber+=scale*transitionNumber%10;
  scale*=2;
  transitionNumber/=10;
  }

  cout<<binaryNumber<<"'s decimal value is:"<<decimalNumber<<endl;
  return 0;
}
