//第一个小问，确定一个数是不是素数。
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,t=1;
    cin >> n;
    if (n<2)
    {
        cout << n << "no" << endl;
        return 0;
    }

    for (int i = 2; i < sqrt(n)+1;i++)
    {		if (n%i == 0)
        {	t = 0;
            break;
        }
    }
    if (t)
        cout <<"It is a prime number" << endl;
    else
        cout << "It is not a prime number" << endl;

    return 0;

}
