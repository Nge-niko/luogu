#include <iostream>
using namespace std;
int main()
{
    int r, h, a;
    cin >> h >> r;
    a = 20000/(3.14*r*r*h) + 1;
    cout << a << endl;
    return 0;
}

