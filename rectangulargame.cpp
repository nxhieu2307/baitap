#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    long long res =0;
    int a=1e9;
    int b=1e9;
    while(n--)
    {
        int x,y;
        cin >> x >> y;
        a=min(a,x);
        b=min(b,y);
    }
    res = 1ll*a*b;
    cout << res;
}

