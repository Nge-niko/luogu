#include <iostream>
using namespace std;
int s, v, cnt, h, sum;
int main()
{
    cin >> s >> v;
    if(s%v==0) cnt=s/v;
    else cnt=s/v+1;
    cnt += 10;
    if(cnt <= 60)
    {
        if(60 - cnt < 10) cout << "07:" << 60 - cnt ;
        else cout << "07:" << 60 - cnt;
    }
    else if(cnt > 60)
    {
        if(cnt % 60 == 0) h = cnt/60;
        else h = cnt/60+1;
        if((8- h) < 0)
        {
            if(h % 8 == 0)sum = h/8;
            else sum = h/8+1;
            if( 60 - cnt % 60 == 60) cout<<((8 + sum*24)-h)%24+1<<":00";
            
        }
    }

}