#include <iostream>
using namespace std;
int n, num1, num2;
int main()
{
    cin >> n;
    num1 = n * 5;
    num2 = n * 3 +11;
    if( num1 < num2 )
    {
        cout << "Local";
    }
    else cout << "Luogu";
    return 0;


}