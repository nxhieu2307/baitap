#include<bits/stdc++.h>
using namespace std;


int getlen(char *a)
{
    int len=0;
    while(a[len] != '\0')
    {
        len++;
    }
    return len;
}
void reverse(char* a)
{
    int n = getlen(a);
    for(int i=0 ; i < n/2 ; i++)
    {
        char tmp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = tmp;
    }
}
void deletechar(char *s, char c)
{
    int j=0;
    int n  = getlen(s);
    for(int i=0 ;  i <  n ; i++)
    {
        if(s[i] != c) s[j++] = s[i];
    }
    s[j] = '\0';
}
void pad_right(char* a , int n)
{
    int m = getlen(a);
    while(m < n )
    {
        a[m++] = ' ';
    }
    a[m+1] = '\0';
}
void pad_left(char* a, int n)
{
    int m = getlen(a);
    if(m>=n) return;

    int space = n - m ;
    for(int i = m ; i >= 0 ; i--)
    {
        a[i+space] = a[i];
    }
    for(int i=0 ; i < space ; i++)
    {
        a[i] = ' ';
    }
    a[getlen(a)] = '\0';
}

void truncate(char*a , int n)
{
    a[n+1] = '\0';
}
bool palindrome(cha* a)
{
    int n = getlen(a);
    for(int i=0 ; i < n/2 ; i++)
    {
        if(a[i] != a[n - i - 1]) return 0;
    }
    return 1;
}
void trim_left(char* a)
{
    int n = getlen(a);
    int lst=0;
    for(int i=0 ; i < n ; i++)
    {
        if(!isspace(a[i]))
        {
            break;
        }
        lst++;
    }
    if(lst)
    {
        for(int i=0 ; i < n - lst ; i++)
        {
            a[i] = a[i+lst];
        }
        a[n-lst] = '\0';
    }
}
void trim_right(char* a)
{
    int n = getlen(a);
    int lst=0;
    for(int i = n -1 ; i >= 0 ; i--)
    {
        if(!isspace(a[i]))
        {
            break;
        }
        lst++;
    }
    a[lst+1]='\0';
}

int main()
{
    char a[] = "vcl";
    cout << palindrome(a);
    trim_left(a);
    cout << a << "\n";
    trim_right(a);
    cout << a << "\n";
}
