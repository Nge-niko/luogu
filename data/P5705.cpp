#include <iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
    double a;
    cin >> a;
    string nums = to_string(a);
    reverse(nums.begin(), nums.end());
    nums.erase(0, nums.find_first_not_of('0'));
    cout << nums << endl;
    return 0;

}