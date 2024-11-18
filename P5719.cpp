#include <iostream>
using namespace std;
int n, k, sum1, sum2;
int main()
{
    double m1, m2, s1, s2;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        if(i % k == 0)
        {
            s1 = s1 + i;
            sum1++;
        }
        else
        {
            s2 = s2 + i;
            sum2++;
        }
    }
    m1 = s1 / sum1;
    
    m2 = s2 / sum2;
    printf("%.1lf %.1lf", m1, m2);
    return 0;
}