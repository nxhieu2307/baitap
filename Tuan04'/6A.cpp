
#include<bits/stdc++.h>
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int rnd(int l,int r)
{
    return l+rng()%(r-l+1);
}
int a[50];
int main()
{
    for(int i=1 ; i <= 30 ; i++) a[i] = rnd(1,100);
    for(int i=1 ; i <= 30 ; i++) cout << a[i] << " ";
    cout << "\n";
    for(int i=1 ;i <= 30 ;i++) for(int j = i+1 ; j <= 30 ; j++)
    {
        if(a[i] > a[j]) swap(a[i], a[j]);
    }
    for(int i=1 ; i <= 30 ; i++) cout << a[i] << " ";
    cout << "\n";
}
