#include<iostream>
using namespace std;
int m, t, s;
int main ()
{
    cin >> m >> t >> s;
    if( t == 0)//如果没有苹果，就输出0
    {
        cout << "0";
    }
    else if( s % t == 0)
    cout << max(0, m-s/t);//用 max 是为了保证结果是正数，因为如果不够一个苹果，就输出0 
    else
    if( s % t!= 0) //如果不能整除，有个苹果是不完整的，就减掉那个不完整的
    cout << max(0, m-s/t-1);
    return 0;

}