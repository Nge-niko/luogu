#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 1;// 计数
    int a[1002] = {0};
    while (n != 1)
    {
        a[sum] = n;
        sum++;
        if (n % 2 == 0) n = n/2;
        else n = n*3+1;
    }
    a[sum] = 1;
    for ( int j = sum; j >= 1; j--) // 倒序输出
    {
        cout << a[j] << " ";
    }
    return 0;
}