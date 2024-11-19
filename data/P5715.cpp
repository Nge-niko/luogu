#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);//左闭右开。
    cout<<a[0]<<" "<<a[1]<<" "<<a[2];
    return 0;
}