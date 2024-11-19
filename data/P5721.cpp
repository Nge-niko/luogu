#include <iostream>
using namespace std;
int n;
int main()
{
    int cut = 0; // 定义一个变量, 用来计数输出的数字
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for(int j = i; j <= n; j++) //随着 i 的增加,j 能循环的次数也减少, 呈倒三角输出
        {
            cut++;
            if( cut < 10) cout << 0;
            cout << cut;
        }
        cout << endl;
    }
    return 0;
}