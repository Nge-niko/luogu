#include <iostream>
using namespace std;
int main()
{
    for(int i = 0; i <= 2; i++)
    {
        for(int j = 0; j <= 2-i-1; j++)
        {
            cout << " ";
        }
        for(int k = 0; k < 2*i+1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i >= 0; i--)
    {
        for (int j = 0; j <= 2-i-1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}