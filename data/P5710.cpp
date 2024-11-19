#include <iostream>
using namespace std;
int a=0,b=0,c=0,d=0,x;
int main()
{
    cin >> x;
    if(x%2==0&&x>=4&&x<=12)a=1;
    if(x%2==0||x>=4&&x<=12||x%2==0&&x>=4&&x<=12)b=1;
    if(x%2==0&&x<=4&&x>=12||x%2==1&&x>=4&&x<=12)c=1;
    if(x%2==1&&x<=4&&x>=12)d=1;
    cout << a << " " << b << " " << c << " " << d << endl;
    return 0;
}