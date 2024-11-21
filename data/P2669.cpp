#include <iostream>
using namespace std;
int main()
{
    int k, b = 0, c = 1, i; // k为天数， b为金币数， c为每天比原来多获得的金币数
    cin >> k;
    for ( i = 1; i <= k; i++)
    {
        k -= i;
        b += c*c;//第一天一枚，后两天每天两枚，后三天每天三枚，以此类推
        c++;
    }
    cout << b+k*c;
    return 0;
}