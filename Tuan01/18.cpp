#include <bits/stdc++.h>
using namespace std;

int main()
{
   int x,y,u,v;
   cin >> x >> y >> u >> v;
   double kc = (u-x)*(u-x) + (v-y)*(v-y);
   kc=sqrt(kc);
   cout << kc;

}
