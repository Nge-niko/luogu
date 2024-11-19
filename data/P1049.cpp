#include <iostream>
using namespace std;

int main()
{
    int i , j , arr[10], res = 0;
    for (i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cin >> j;
    for (i = 0; i < 10; i++)
    {
        if(arr[i] <= j + 30)
        {
            res++ ;
        }
    }
    cout << res << endl;
}