#include<bits/stdc++.h>
using namespace std;
const int N = 1e4+10;
int a[N];
int s[N];

int main()
{
    int n;
    cin >> n;
    for(int i=1 ; i <= n ; i++) cin >> a[i];

    for(int i=1 ; i <= n ; i++) for(int j= i+1 ; j <= n ; j++)
    {
        if(a[i] > a[j]) swap(a[i] , a[j]);
    }
  //  for(int i=1 ; i <= n ; i++) cout << a[i] << " ";
    int res=0;
    for(int i=1 ; i <= n ; i++) s[i] = s[i-1] + a[i];
    for(int i=1 ; i <= n ; i++) res+=s[i-1];
    cout << res << "\n";
}
