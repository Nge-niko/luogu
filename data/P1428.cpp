#include <iostream>
using namespace std;
int a[102], b[102], n; 
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j >= 1; j--)
        {
            if(a[i] > a[j])
            b[i]++;
        }
    }
    for(int i = 1; i <= n; i++) cout << b[i] << " ";
    return 0;
}