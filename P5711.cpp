#include <iostream>
using namespace std;
int n;
int main()
{
     cin >> n;
    if ( n >= 1582 && n <=2020)
    {
        if(n % 4 == 0 && n % 100!= 0 || n % 400 == 0)
        cout << 1;
        else
        cout << 0;
    }
    else cout << 0;  
    return 0;
}