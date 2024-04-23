#include<bits/stdc++.h>
using namespace std;

char* reverse(const char* a)
{
    int n = strlen(a);
    char* res = new char[n+1];
    for(int i=0 ; i < n ; i++)
    {
        res[n - i - 1 ] = a[i];
    }
    res[n] = '\0';
    return res;
}
char *deletechar(char *s , char c)
{
    int n = strlen(s);
    char *res = new char [n+1];
    int j=0;
    for(int i=0 ; i < n ; i++)
    {
        if(s[i] != c)
        {
            res[j] = s[i];
            j++;
        }
    }
    res[j] = '\0';
    return res;
}
char* pad_right(char* a , int n)
{
    int m = strlen(a);
    char* res = new char [n+1];
    for(int i=0 ; i < m ; i++) res[i] = a[i];
    while(m < n )
    {
        res[m++] = ' ';
    }
    a[n+1] = '\0';
    return res;
}

char* pad_left(char* a, int n)
{
    int m = strlen(a);
    char* res = new char[n+1];

    if(n>=m)
    {
        for(int i=0 ; i < n ; i++) res[i] = a[i];
        return res;
    }
    int space = n - m ;
    for(int i = m ; i >= 0 ; i--)
    {
        res[i+space] = a[i];
    }
    for(int i=0 ; i < space ; i++)
    {
        res[i] = ' ';
    }
    res[n+1] = '\0';
    return res;
}
char* trim_left(const char* a)
{
    int n = strlen(a);
    int lst=0;

    for(int i=0 ; i < n ; i++)
    {
        if(!isspace(a[i])) break;
        lst++;
    }
    char* res = new char [n - lst + 1];
    for(int i=0 ; i < n - lst + 1 ; i++) res[i] = a[i+lst];
    return res;
}

char* trim_right(const char* a)
{
    int n = strlen(a);
    int lst=0;
    for(int i = n -1 ; i >= 0 ; i--)
    {
        if(!isspace(a[i]))
        {
            break;
        }
        lst++;
    }
    char *res = new char[lst+1];

    for(int i=0 ; i < lst ; i++) res[i] = a[i];
    res[lst]='\0';
    return res;
}

int main()
{

}
