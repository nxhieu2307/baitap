#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = (int)s.size();
    s=" " + s;
    int cnt=0;
    int sz=0;
    long long res=0;
    for(int i=1 ; i <= n ; i++)
    {
        if(s[i] == s[i-1])
        {
            sz++;
        }
        else
        {
            if(sz>=2) res++;
            sz=1;
            cnt++;
        }

        if(i > 1 && s[i] != s[i-1] && s[i-1] == s[i+1]) res--;
    }
    if(sz>=2) res++;

    res += 1ll*cnt*(cnt-1)/2;
    cout << res;

}
