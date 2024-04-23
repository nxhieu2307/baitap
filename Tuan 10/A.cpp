#include<bits/stdc++.h>
using namespace std;

char* concat(const char* a, const char* b)
{
    int n = strlen(a);
    int m = strlen(b);
    int len = n + m + 1;
    char* res = new char[len + 1];

    for(int i=0 ; i < n ; i++)
    {
        res[i] = a[i];
    }
    for(int i=0 ; i < m ; i++)
    {
        res[i + n ] = b[i];
    }
    res[len] = '\0';
    return res;
}
int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; // con tro p da bi xoa -> ko con vung bo nho
    // giai quyet
    p2 = new int;
    *p2 = 100;
    cout << *p2;
    delete p2;
    cout << "\n";

    char* a = new char [10];
    char* c  = a + 3;
    for(int i=0 ; i < 9 ; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl;
    // de xoa con tro C ko the? dung` delete vi C la con tro chi toi mot phan cua mang?

}
