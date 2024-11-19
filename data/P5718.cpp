#include <iostream>
using namespace std;
int n;
int main()
{
    int min = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    min = a[0];
    for(int i = 0; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    cout << min;
    return 0;
}