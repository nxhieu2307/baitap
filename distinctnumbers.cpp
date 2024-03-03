
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 100;

#define getbit(x,i)
int n;
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("task.inp" , "r", stdin);

    int x;
    int last=-2;
    while(cin >> x)
    {
        if(last!=x) cout << x << " ";
        last=x;
        if(x<0) return 0;
    }

}
