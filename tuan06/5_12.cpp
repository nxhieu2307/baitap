#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    //bool ok=1;
    if(n < 1) return 0;
    for(int i=2 ; i * i <= n ; i++)
    {
        if(n % i == 0) return 0;
    }
    return 1;
}
void solve5(int n)
{
    for(int i=2 ; i <= n ; i++)
    {
        if(prime(i)) cout << i << " ";
    }
    cout << "\n";
}
bool gcd(int a, int b)
{
    if(a==0) return b;
    return gcd(b%a , a);
}
int solve6(int a, int b)
{
   if(gcd(a,b) == 1) return 1;
   return 0;
}
void space(int m)
{
    for(int i=1 ; i <= m ; i++) cout << " ";
}
void star(int n)
{
    for(int i=1 ; i <= n ; i++) cout << "*";
}
void solve7(int n)
{
    for(int i=1 ; i <= n ; i++)
    {
        space(n-i);
        star(2*i - 1);
        cout << "\n";
    }
}

int rnd1(double n)
{
    if( n > (int) n ) return n+1;
    return n;
}
int rnd2(double n)
{
    return ceil(n);
}
int random(int n)
{
    return rand()%n;
}
int solve10(int n)
{
    int a[n+10];
    int res=0;
    for(int i=1 ; i <= n ; i++) a[i] = rand()%(50);

    map<int,int> cnt;
    for(int i=1 ; i <= n ; i++)
    {
        for(int j=i+1 ; j <= n ; j++)
        {
            int target = (50 - a[i] - a[j] + 50 + 50) % 50;
            res +=cnt[target];
        }
        cnt[a[i]%50]++;
    }
    return res;
}
int C(int k, int n)
{
    if(n == k || k == 0) return 1;
    else return C(k-1, n-1) + C(k, n-1);
}

int main()
{

}
