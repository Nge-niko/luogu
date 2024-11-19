#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double a, b, c, s, p;
    cin >> a >> b >> c;
    p = (a+b+c)/2.0;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1f", s);
    return 0;

}