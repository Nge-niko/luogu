#include <iostream>
using namespace std;
int a, sum = 1;
int main()
{
    cin >> a;
    while( a != 1 )
    {
        sum ++;
        a /= 2;
    }
    cout << sum;
    return 0;
}